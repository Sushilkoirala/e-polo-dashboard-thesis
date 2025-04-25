import pygame
import serial
import time

# Serial port configuration
SERIAL_PORT = '/dev/ttyACM0'  
BAUD_RATE = 9600

# Initialize Pygame
pygame.init()

# screen
screen = pygame.display.set_mode((600, 200))  
pygame.display.set_caption("Serial Data Display")

# fonts
font = pygame.font.SysFont("Arial", 20)

# Define critical thresholds
CRITICAL_SPEED = 200  
CRITICAL_TEMP = 30    
CRITICAL_SOC = 80     
CRITICAL_DRIVE = 50 

# Initialize serial connection
ser = None
try:
    ser = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
    print(f"Connected to {SERIAL_PORT}")
except serial.SerialException as e:
    print(f"Error: {str(e)}")

# Function to parse the serial data into a dictionary
def parse_serial_data(data):
    data_dict = {}
    items = data.split(",") 
    for item in items:
        if ':' in item:
            key, value = item.split(":")  
            data_dict[key.strip()] = value.strip()  
        else:
            print(f"Skipping invalid item: {item}") 
    return data_dict

def get_color_based_on_value(value, critical_value):
    """Return red if critical value exceeded, else green"""
    try:
        value = float(value)  
        if value >= critical_value:
            return (255, 0, 0)  # Red color 
        else:
            return (0, 255, 0)  # Green color
    except ValueError:
        return (0, 0, 0)  

# Main loop
running = True
while running:
    screen.fill((255, 255, 255))  

    
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Read data from the serial port
    if ser and ser.in_waiting:
        line = ser.readline().decode('utf-8', errors='replace').strip()
        if line:
            print(f"Received: {line}")  
            parsed_data = parse_serial_data(line)  

            
            soc = parsed_data.get("Charge", "N/A")
            speed = parsed_data.get("Speed", "N/A")
            temp = parsed_data.get("Temp", "N/A")
            drive = parsed_data.get("Drive", "N/A")

            
            soc_color = get_color_based_on_value(soc, CRITICAL_SOC)
            speed_color = get_color_based_on_value(speed, CRITICAL_SPEED)
            temp_color = get_color_based_on_value(temp, CRITICAL_TEMP)
            drive_color = get_color_based_on_value(drive, CRITICAL_DRIVE)

           
            soc_text = font.render(f"SOC: {soc}", True, soc_color)
            speed_text = font.render(f"Speed: {speed}", True, speed_color)
            temp_text = font.render(f"Temp: {temp}", True, temp_color)
            drive_text = font.render(f"Drive: {drive}", True, drive_color)

            
            screen.blit(soc_text, (20, 50))  
            screen.blit(speed_text, (160, 50))  
            screen.blit(temp_text, (300, 50))  
            screen.blit(drive_text, (440, 50))  

    pygame.display.flip()  

    time.sleep(0.1) 


if ser:
    ser.close()

pygame.quit()
