#include <UTFT.h>
#include <Touch.h>

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];

// Battery capacity thresholds
#define BAT_HIGH_THRESHOLD 50
#define BAT_LOW_THRESHOLD 20

// Temperature thresholds
#define TEMP_HIGH_THRESHOLD 40
#define TEMP_LOW_THRESHOLD 35

// Battery display colors
#define BAT_COLOR_HIGH    0, 255, 0    // Green
#define BAT_COLOR_MEDIUM  255, 165, 0  // Orange
#define BAT_COLOR_LOW     255, 0, 0    // Red

// Temperature display colors
#define TEMP_COLOR_COOL   0, 255, 255  // Cyan
#define TEMP_COLOR_WARM   255, 165, 0  // Orange
#define TEMP_COLOR_HOT    255, 0, 0    // Red

// Initialize display and touch
UTFT myGLCD(ILI9325D_16, PD11, PD5, PD7, PC1);
Touch myTouch(PA6, PB6, PA5, PB7, PA7);

// Global variables
uint16_t speedVal = 20;
uint8_t batCapacity[4]= {90,90,90,90};
uint16_t cellVolt[60] = {
    250, 320, 439, 302, 343, 233, 343, 234, 234, 234,
    877, 567, 234, 658, 98, 250, 320, 439, 302, 343,
    233, 343, 234, 234, 234, 877, 567, 234, 658, 98,
    250, 320, 439, 302, 343, 233, 343, 234, 234, 234,
    877, 567, 234, 658, 98, 250, 320, 439, 302, 343,
    233, 343, 234, 234, 234, 877, 567, 234, 658, 98
};
uint8_t cellTemp[20] = {40, 21, 43, 35, 32, 40, 21, 43, 35, 32, 40, 21, 43, 35, 32, 40, 21, 43, 35, 32};
uint16_t drivingAmp = 344;
uint16_t chargingAmp[4]= {0,23,45,12};
uint8_t chargerTemp[4]= {23,54,98,44};
uint32_t miles = 543219;

void setup()
{
    // Setup the LCD
    myGLCD.InitLCD();
    myGLCD.setFont(SmallFont);
    //myTouch.init(320, 200, 3900, 3900);
   
    // drawing functions
    speedometer(speedVal);
    battery();
    thermometer();
    ampMeter();
}

void loop()
{
    // You can add code here to update the speed value
}

void speedometer(int speedval) {
    int centerX = 160;
    int centerY = 230;
    int outerRadius = 108;
    int innerRadius = 45;
   
    // Clear background
    myGLCD.setColor(0, 0, 0);
    myGLCD.fillRect(0, 0, 319, 239);
   
    // Draw thicker outer arc
    myGLCD.setColor(68, 68, 68); // Gray
    // Draw multiple lines with slight offset for thickness
    for(int r = outerRadius - 2; r <= outerRadius + 2; r++)
    {
        for(float angle = 180; angle <= 360; angle += 0.5)
        {
            float radian = radians(angle);
            int x = centerX + cos(radian) * r;
            int y = centerY + sin(radian) * r;
            myGLCD.drawPixel(x, y);
        }
    }
   
    // Draw inner arc with smoother edges
    myGLCD.setColor(255, 255, 255);
    for(float angle = 180; angle <= 360; angle += 0.5)
    {
        float radian = radians(angle);
        int x = centerX + cos(radian) * innerRadius;
        int y = centerY + sin(radian) * innerRadius;
        myGLCD.drawPixel(x, y);
    }
   
    // Draw major scale markings with thicker lines
    myGLCD.setColor(255, 255, 255);
    for(int angle = 180; angle <= 360; angle += 20) {
        float radian = radians(angle);
        for(int w = -1; w <= 1; w++) { // Thicker marks
            int x1 = centerX + cos(radian) * (outerRadius + w);
            int y1 = centerY + sin(radian) * (outerRadius + w);
            int x2 = centerX + cos(radian) * (outerRadius - 12 + w);
            int y2 = centerY + sin(radian) * (outerRadius - 12 + w);
            myGLCD.drawLine(x1, y1, x2, y2);
        }
    }
   
    // Draw minor scale markings
    for(int angle = 190; angle <= 350; angle += 10) {
        float radian = radians(angle);
        int x1 = centerX + cos(radian) * outerRadius;
        int y1 = centerY + sin(radian) * outerRadius;
        int x2 = centerX + cos(radian) * (outerRadius - 7);
        int y2 = centerY + sin(radian) * (outerRadius - 7);
        myGLCD.drawLine(x1, y1, x2, y2);
    }
   
    // Draw numeric labels
    const char *labels[] = {"0", "20", "40", "60", "80", "100", "120", "140", "160", "180"};
    int labelAngles[] = {180, 200, 220, 240, 260, 280, 300, 320, 340, 360};
    for(int i = 0; i < 10; i++) {
        int x = centerX + cos(radians(labelAngles[i])) * (outerRadius - 30);
        int y = centerY + sin(radians(labelAngles[i])) * (outerRadius - 30);
        myGLCD.print(labels[i], x - 8, y - 8);
    }
   
    // Draw enhanced needle with improved appearance
    int needleAngle = map(speedval, 0, 180, 180, 360);
    float needleRadian = radians(needleAngle);
   
    // Draw needle with triangle shape
    myGLCD.setColor(255, 0, 0);
    int baseWidth = 6;
   
    // Calculate points for triangle
    int x1 = centerX + cos(needleRadian + radians(90)) * baseWidth;
    int y1 = centerY + sin(needleRadian + radians(90)) * baseWidth;
    int x2 = centerX + cos(needleRadian - radians(90)) * baseWidth;
    int y2 = centerY + sin(needleRadian - radians(90)) * baseWidth;
    int tipX = centerX + cos(needleRadian) * (outerRadius - 17);
    int tipY = centerY + sin(needleRadian) * (outerRadius - 17);
   
    // Fill triangle for needle
    for(int i = -baseWidth; i <= baseWidth; i++) {
        int startX = centerX + cos(needleRadian + radians(90)) * i;
        int startY = centerY + sin(needleRadian + radians(90)) * i;
        myGLCD.drawLine(startX, startY, tipX, tipY);
    }
   
    // Draw center dot with multiple circles for better appearance
    myGLCD.setColor(255, 0, 0);
    myGLCD.fillCircle(centerX, centerY, 5);
    myGLCD.setColor(200, 0, 0);
    myGLCD.fillCircle(centerX, centerY, 3);
   
    // Display speed value
    myGLCD.setColor(255, 255, 255);
    myGLCD.setBackColor(0, 0, 0);
    char speedText[5];
    sprintf(speedText, "%d", speedval);
    myGLCD.print(speedText, 130, 220);
    myGLCD.print("km/h", 158, 220);
}

void battery() {
    // Calculate average battery capacity
    uint16_t avgCapacity = 0;
    for(int i = 0; i < 4; i++) {
        avgCapacity += batCapacity[i];
    }
    avgCapacity /= 4;
   
    // Battery outline coordinates
    int battX = 260;
    int battY = 25;
    int battWidth = 40;
    int battHeight = 90;
    int tipWidth = 18;
    int tipHeight = 8;
   
    // Clear the battery area first
    myGLCD.setColor(0, 0, 0);
    myGLCD.fillRect(battX - 2, battY - tipHeight - 2,
                    battX + battWidth + 2, battY + battHeight + 20);
   
    // Draw battery outline
    myGLCD.setColor(255, 255, 255);  // White color for outline
   
    // Main battery rectangle
    myGLCD.drawRect(battX, battY, battX + battWidth, battY + battHeight);
   
    // Battery tip (positive terminal)
    int tipX = battX + (battWidth - tipWidth) / 2;
    myGLCD.drawRect(tipX, battY - tipHeight, tipX + tipWidth, battY);
   
    // Fill battery tip with white
    myGLCD.fillRect(tipX + 1, battY - tipHeight + 1, tipX + tipWidth - 1, battY - 1);
   
    // Calculate fill height based on capacity percentage
    int fillHeight = (battHeight * avgCapacity) / 100;
    int fillY = battY + battHeight - fillHeight;
   
    // Set fill color based on capacity level using defined thresholds
    if(avgCapacity > BAT_HIGH_THRESHOLD) {
        myGLCD.setColor(BAT_COLOR_HIGH);
    } else if(avgCapacity > BAT_LOW_THRESHOLD) {
        myGLCD.setColor(BAT_COLOR_MEDIUM);
    } else {
        myGLCD.setColor(BAT_COLOR_LOW);
    }
   
    // Fill battery according to capacity
    if(fillHeight > 0) {  // Only fill if there's capacity
        myGLCD.fillRect(battX + 2, fillY, battX + battWidth - 2, battY + battHeight - 2);
    }
   
    // Display percentage text
    myGLCD.setColor(255, 255, 255);  // White text
    myGLCD.setBackColor(0, 0, 0);    // Black background
    char capacityText[5];
    sprintf(capacityText, "%d%%", avgCapacity);
    myGLCD.print(capacityText, battX + 5, battY + battHeight + 5);
}

void thermometer() {
    // Calculate average temperature
    uint16_t avgTemp = 0;
    for(int i = 0; i < 20; i++) {
        avgTemp += cellTemp[i];
    }
    avgTemp /= 20;
   
    // Thermometer coordinates and dimensions
    int thermX = 30;
    int thermY = 20;
    int bulbRadius = 18;
    int tubeWidth = 12;
    int tubeHeight = 75;
    int scaleOffset = 15;
   
    // Clear the thermometer area
    myGLCD.setColor(0, 0, 0);
    myGLCD.fillRect(thermX - bulbRadius - 2, thermY - 2,
                    thermX + bulbRadius + scaleOffset + 30,
                    thermY + tubeHeight + bulbRadius + 20);
   
    // Draw the bulb
    myGLCD.setColor(255, 255, 255);  // White outline
    myGLCD.drawCircle(thermX, thermY + tubeHeight, bulbRadius);
   
    // Draw the tube
    myGLCD.drawRect(thermX - tubeWidth/2, thermY,
                    thermX + tubeWidth/2, thermY + tubeHeight - bulbRadius/2);
   
    // Calculate fill height based on temperature
    int maxTemp = 100;
    int fillHeight = ((tubeHeight - bulbRadius/2) * min(avgTemp, (uint16_t)maxTemp)) / maxTemp;
    int fillY = thermY + (tubeHeight - bulbRadius/2) - fillHeight;
   
    // Set fill color based on temperature using defined thresholds
    if(avgTemp < TEMP_LOW_THRESHOLD) {
        myGLCD.setColor(TEMP_COLOR_COOL);
    } else if(avgTemp < TEMP_HIGH_THRESHOLD) {
        myGLCD.setColor(TEMP_COLOR_WARM);
    } else {
        myGLCD.setColor(TEMP_COLOR_HOT);
    }
   
    // Fill the tube
    myGLCD.fillRect(thermX - tubeWidth/2 + 2, fillY,
                    thermX + tubeWidth/2 - 2, thermY + tubeHeight - bulbRadius/2 - 2);
   
    // Fill the bulb
    myGLCD.fillCircle(thermX, thermY + tubeHeight, bulbRadius - 2);
   
    // Display current temperature
    myGLCD.setColor(255, 255, 255);
    myGLCD.setBackColor(0, 0, 0);
    char tempText[10];
    sprintf(tempText, "%d C", avgTemp);  // Removed degree symbol
    myGLCD.print(tempText, thermX - 15, thermY + tubeHeight + bulbRadius + 5);
}

void ampMeter() {
    // Define all constants inside the function
    int centerX = 160;      // Center of screen horizontally
    int centerY = 70;       // Position vertically
    int radius = 32;        // Reduced circle radius
    int thickness = 3;      // Circle thickness
    int textWidth = 8;      // Width per character in pixels
   
    // Clear the area with extra padding for heading
    myGLCD.setColor(0, 0, 0);
    myGLCD.fillRect(centerX - radius - 10,
                    centerY - radius - 25,
                    centerX + radius + 10,
                    centerY + radius + 15);  // Extended for 'A' below
   
    // Draw heading "DRAIN"
    myGLCD.setColor(255, 255, 255);
    myGLCD.setBackColor(0, 0, 0);
    myGLCD.print("DRAIN", centerX - 20, centerY - radius - 20);
   
    // Draw thick circle (multiple circles for thickness)
    myGLCD.setColor(255, 255, 255);  // White color
    for(int i = 0; i < thickness; i++) {
        myGLCD.drawCircle(centerX, centerY, radius - i);
    }
   
    // Draw internal decorative circle
    myGLCD.drawCircle(centerX, centerY, radius - thickness - 4);
   
    // Calculate and display the amperage value (divided by 10)
    float displayAmp = drivingAmp / 10.0;
    char ampText[10];
    sprintf(ampText, "%.1f", displayAmp);
   
    // Center the text inside the circle
    int textLen = strlen(ampText) * textWidth;
    int textX = centerX - (textLen / 2) + 2;
    int textY = centerY - 8;
   
    // Draw background for the value to increase readability
    int textBgPadding = 4;
    myGLCD.setColor(0, 0, 0);
    myGLCD.fillRect(textX - textBgPadding,
                    textY - textBgPadding,
                    textX + textLen + textBgPadding,
                    textY + 10 + textBgPadding);
   
    // Display the value in red
    myGLCD.setColor(255, 0, 0);  // Red color for value
    myGLCD.print(ampText, textX, textY);
   
    // Display measurement unit "A" below the value
    myGLCD.setColor(255, 255, 255);  // White color for 'A'
    myGLCD.print("A", centerX - 3, centerY + 5);
    // Add decorative ticks around the circle
    for(int angle = 0; angle < 360; angle += 30) {
        float radian = angle * PI / 180;
        int x1 = centerX + cos(radian) * (radius - thickness - 6);
        int y1 = centerY + sin(radian) * (radius - thickness - 6);
        int x2 = centerX + cos(radian) * (radius - thickness - 9);
        int y2 = centerY + sin(radian) * (radius - thickness - 9);
        myGLCD.drawLine(x1, y1, x2, y2);
    }
}
