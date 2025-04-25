#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Linux headers
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()

typedef char int8_t;
typedef short int16_t;
typedef unsigned short uint16_t;

int16_t amp, volt;
bool increase;
int16_t mytimer;

int8_t cells[60]={0,3, 0, -2, 1, 4, -3,0,-2,-1,0,2,-5,-3,-4,
                   1,-3,2,4,-3,-5,2,4,0,0,3,-2,4,-2, -5,
                   -2,0,0,2,1,-1,0,3,0,-1,0,-1, 2, -1, -2,
                   1,2,3,-2,-3,4,-1,0,0,-2,-2,0,2,0,-2};

                   

int main(int argc, char** argv) {

    int serial_port = open("/dev/ttyUSB0", O_RDWR);
    if (serial_port < 0) {
        printf("Error %i from open: %s\n", errno, strerror(errno));
        return -1;
    }
    struct termios tty;

    // Read in existing settings, and handle any error
    // NOTE: This is important! POSIX states that the struct passed to tcsetattr()
    // must have been initialized with a call to tcgetattr() overwise behaviour
    // is undefined
    if(tcgetattr(serial_port, &tty) != 0) {
        printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
        return -1;
    }
  tty.c_cflag &= ~PARENB; // Clear parity bit, disabling parity (most common)
  tty.c_cflag &= ~CSTOPB; // Clear stop field, only one stop bit used in communication (most common)
  tty.c_cflag &= ~CSIZE; // Clear all bits that set the data size
  tty.c_cflag |= CS8; // 8 bits per byte (most common)
  tty.c_cflag &= ~CRTSCTS; // Disable RTS/CTS hardware flow control (most common)
  tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

  tty.c_lflag &= ~ICANON;
  tty.c_lflag &= ~ECHO; // Disable echo
  tty.c_lflag &= ~ECHOE; // Disable erasure
  tty.c_lflag &= ~ECHONL; // Disable new-line echo
  tty.c_lflag &= ~ISIG; // Disable interpretation of INTR, QUIT and SUSP
  tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
  tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); // Disable any special handling of received bytes

  tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes (e.g. newline chars)
  tty.c_oflag &= ~ONLCR; // Prevent conversion of newline to carriage return/line feed
  // tty.c_oflag &= ~OXTABS; // Prevent conversion of tabs to spaces (NOT PRESENT ON LINUX)
  // tty.c_oflag &= ~ONOEOT; // Prevent removal of C-d chars (0x004) in output (NOT PRESENT ON LINUX)

  tty.c_cc[VTIME] = 10;    // Wait for up to 1s (10 deciseconds), returning as soon as any data is received.
  tty.c_cc[VMIN] = 0;


    cfsetispeed(&tty, B115200);
    cfsetospeed(&tty, B115200);

  if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
      printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
      return 1;
  }

    increase = true;
    mytimer = 0;
    volt = 20000;
    amp = 0;

    int i,j;
    while (true) {
        if (increase) {
            amp ++;
            volt-=10;

            if (amp > 250) {
              amp = 250;
              increase = false;
            }
        }
        else {
            amp --;
            volt +=10;

            if (amp < -120) {
              amp = -120;
              increase = true;
            }    
        }

//        Serial.print("CellVoltage:");
        char msg[255];
        strcpy(msg,"CellVoltage:");
        for (j=0; j < strlen(msg); j++) {
            if (write(serial_port,&( msg[j]), 1) < 1 ) printf("Error \n");
            printf("%c",( msg[j]));
            usleep(500);
            }
        uint16_t cellv = volt/60;
        for (i=0; i < 60; i++) {
//            Serial.print(((int)cellv+cells[i]), DEC);
//            Serial.print(";");
            sprintf(msg,"%d;",cellv+cells[i]);
        for (j=0; j < strlen(msg); j++) {
            if (write(serial_port,&( msg[j]), 1) < 1 ) printf("Error \n");
            printf("%c",( msg[j]));
            usleep(1500);
            }
        }
        printf("%s:%ld\n",msg,write(serial_port, "\n", 2));

//        Serial.println("CellTemp:40;21;43;35;32;40;21;43;35;32;40;21;43;35;32;40;21;43;35;32");
//        Serial.print("DrivingAmperage:");
//        Serial.println(amp);
        sprintf(msg,"CellTemp:40;21;43;35;32;40;21;43;35;32;40;21;43;35;32;40;21;43;35;32\nDrivingAmperage:%d\n",amp);
        for (j=0; j < strlen(msg); j++) {
            if (write(serial_port,&( msg[j]), 1) < 1 ) printf("Error \n");
            printf("%c",( msg[j]));
            usleep(1500);
            }


//        Serial.print("CharingAmperage:");
//        Serial.println("0;0;0;0");
//        Serial.println("ChargerTemp:23;33;34;36");
//        Serial.println("Capacity:90;90;89;91");
        sprintf(msg,"CharingAmperage:0;0;0;0\nChargerTemp:23;33;34;36\nCapacity:90;90;89;91\n");
        for (j=0; j < strlen(msg); j++) {
            if (write(serial_port,&( msg[j]), 1) < 1 ) printf("Error \n");
            printf("%c",( msg[j]));
            usleep(500);
            }

        sleep(1);
     }  
}
