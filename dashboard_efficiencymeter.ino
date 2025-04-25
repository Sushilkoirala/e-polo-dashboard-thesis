//Dashboard with Efficiency Meter

// Screen Dimensions
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// Colors
#define COLOR_BLACK 0x0000
#define COLOR_WHITE 0xFFFF
#define COLOR_RED 0xF800
#define COLOR_GREEN 0x07E0
#define COLOR_BLUE 0x001F
#define COLOR_YELLOW 0xFFE0
#define COLOR_CYAN 0x07FF
#define COLOR_GRAY 0x4208
#define COLOR_LIGHT_BLUE 0x6458
#define COLOR_SADDLE_BROWN 0x8A22

// Common Layout
#define BOX_TEXT_MARGIN 15
#define BOX_SYMBOL_OFFSET 35
#define BOX_VALUE_Y_OFFSET 30
#define BOX_LABEL_Y_OFFSET 5

// Main Navigation Buttons
#define DRIVE_X 10
#define DRIVE_Y 40
#define DRIVE_WIDTH 90
#define DRIVE_HEIGHT 50

#define TEMP_X 110
#define TEMP_Y 40
#define TEMP_WIDTH 90
#define TEMP_HEIGHT 50

#define CHARGE_X 210
#define CHARGE_Y 40
#define CHARGE_WIDTH 90
#define CHARGE_HEIGHT 50

#define CHARGE_CURRENT_AVG_SAMPLES 4
#define CHARGE_CURRENT_TEXT_COLOR COLOR_WHITE
#define CHARGE_CURRENT_BACKGROUND_COLOR COLOR_GRAY

// Icons
#define AMPERE_LINE_LENGTH 15
#define AMPERE_ANGLE_LENGTH 10
#define THERMO_BULB_RADIUS 6
#define THERMO_BODY_WIDTH 4
#define THERMO_BODY_HEIGHT 25
#define THERMO_MERCURY_HEIGHT 15
#define LIGHTNING_SEGMENT_1 10
#define LIGHTNING_SEGMENT_2 5
#define LIGHTNING_SEGMENT_3 15
#define LIGHTNING_SEGMENT_4 10
#define LIGHTNING_SEGMENT_5 20

// Battery Display
#define BATTERY_CENTER_X 160
#define BATTERY_Y 10
#define BATTERY_WIDTH 200
#define BATTERY_HEIGHT 20

// Battery Capacity Thresholds
#define BATTERY_HIGH_THRESHOLD     70
#define BATTERY_MEDIUM_THRESHOLD   30

// Color Definitions
#define COLOR_BATTERY_HIGH         COLOR_GREEN
#define COLOR_BATTERY_MEDIUM       COLOR_YELLOW
#define COLOR_BATTERY_LOW          COLOR_RED
#define COLOR_BATTERY_OUTLINE      COLOR_WHITE
#define COLOR_BATTERY_TEXT         COLOR_WHITE
#define COLOR_BATTERY_BACKGROUND   COLOR_BLACK

// Battery Terminal Dimensions
#define BATTERY_TERMINAL_WIDTH     6
#define BATTERY_TERMINAL_OFFSET    2
#define BATTERY_TERMINAL_MARGIN    5

// Efficiency meter constants
#define EFF_MAX_VALUE 10.0  // Maximum efficiency in km/kWh
#define EFF_LOW_THRESHOLD 3.0
#define EFF_MEDIUM_THRESHOLD 7.0
#define EFF_COLOR_LOW COLOR_RED
#define EFF_COLOR_MEDIUM COLOR_YELLOW
#define EFF_COLOR_HIGH COLOR_GREEN

// Define positions for right side metrics
#define RIGHT_METRICS_X 220
#define RIGHT_METRICS_Y 120
#define METRIC_HEIGHT 40
#define METRIC_SPACING 10

#include <UTFT.h>
#include <Touch.h>

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];

// Initialize display and touch
UTFT myGLCD(ILI9325D_16, PD11, PD5, PD7, PC1);
Touch myTouch(PA6, PB6, PA5, PB7, PA7);

// Screen identifiers
enum ScreenState {
  SCREEN_MAIN,
  SCREEN_BATTERY,
  SCREEN_DEEP_BATTERY,
  SCREEN_TEMP,
  SCREEN_CHARGER,
};


// Other Global variables
bool isEfficiencyMeterActive = false;

// Global Variables
uint16_t speedVal = 20;
uint8_t batCapacity[4] = {90, 90, 90, 90};
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
uint16_t chargingAmp[4] = {0, 23, 45, 12};
uint8_t chargerTemp[4] = {23, 54, 98, 44};
uint32_t km = 543219;


uint8_t efficiency = 9;
uint16_t range = 9;
uint32_t Charging_time = 83;



// Main setup function
void setup() {
  // Setup the LCD
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  myTouch.init(320, 200, 3900, 3900);
  mainScreen();
}

void loop() {
 
}

void mainScreen()
{
    myGLCD.setColor(COLOR_BLACK);
    myGLCD.fillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
    BatteryIndicator();
    drawIndicators();
    efficiencyMeter(efficiency);
    drawRightMetrics();
}

void BatteryIndicator() {
    // Calculate average battery capacity
    uint16_t avgCapacity = 0;
    for(int i = 0; i < 4; i++) {
        avgCapacity += batCapacity[i];
    }
    avgCapacity /= 4;
   
    // Calculate battery fill width
    int fillWidth = map(avgCapacity, 0, 100, 0, BATTERY_WIDTH);
   
    // Battery outline
    myGLCD.setColor(COLOR_BATTERY_OUTLINE);
    myGLCD.drawRoundRect(BATTERY_CENTER_X - BATTERY_WIDTH/2, BATTERY_Y,
                    BATTERY_CENTER_X + BATTERY_WIDTH/2, BATTERY_Y + BATTERY_HEIGHT);
   
    // Battery terminal
    myGLCD.fillRect(BATTERY_CENTER_X + BATTERY_WIDTH/2 + BATTERY_TERMINAL_OFFSET,
                    BATTERY_Y + BATTERY_TERMINAL_MARGIN,
                    BATTERY_CENTER_X + BATTERY_WIDTH/2 + BATTERY_TERMINAL_OFFSET + BATTERY_TERMINAL_WIDTH,
                    BATTERY_Y + BATTERY_HEIGHT - BATTERY_TERMINAL_MARGIN);
   
    // Battery fill color based on capacity
    if(avgCapacity > BATTERY_HIGH_THRESHOLD) {
        myGLCD.setColor(COLOR_BATTERY_HIGH);
    } else if(avgCapacity > BATTERY_MEDIUM_THRESHOLD) {
        myGLCD.setColor(COLOR_BATTERY_MEDIUM);
    } else {
        myGLCD.setColor(COLOR_BATTERY_LOW);
    }
   
    // Fill battery
    myGLCD.fillRoundRect(BATTERY_CENTER_X - BATTERY_WIDTH/2 + 2, BATTERY_Y + 2,
                    BATTERY_CENTER_X - BATTERY_WIDTH/2 + 2 + fillWidth,
                    BATTERY_Y + BATTERY_HEIGHT - 2);
   
    // Display battery percentage
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(COLOR_BATTERY_TEXT);
    myGLCD.setBackColor(COLOR_BLACK);
    char batText[10];
    sprintf(batText, "%d%%", avgCapacity);
    myGLCD.print(batText, BATTERY_CENTER_X + BATTERY_WIDTH/2 + 15, BATTERY_Y + 4);
}


void drawIndicators() {
    // Drive Current Box
    myGLCD.setColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.drawRoundRect(DRIVE_X, DRIVE_Y, DRIVE_X + DRIVE_WIDTH, DRIVE_Y + DRIVE_HEIGHT);
    myGLCD.fillRoundRect(DRIVE_X, DRIVE_Y, DRIVE_X + DRIVE_WIDTH, DRIVE_Y + DRIVE_HEIGHT);
    drawDriveCurrentBox(DRIVE_X + DRIVE_WIDTH / 2, DRIVE_Y, DRIVE_WIDTH);

    // Temperature Box
    myGLCD.setColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.drawRoundRect(TEMP_X, TEMP_Y, TEMP_X + TEMP_WIDTH, TEMP_Y + TEMP_HEIGHT);
    myGLCD.fillRoundRect(TEMP_X, TEMP_Y, TEMP_X + TEMP_WIDTH, TEMP_Y + TEMP_HEIGHT);
    drawTemperatureBox(TEMP_X + TEMP_WIDTH / 2, TEMP_Y, TEMP_WIDTH);

    // Charge Current Box
    myGLCD.setColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.drawRoundRect(CHARGE_X, CHARGE_Y, CHARGE_X + CHARGE_WIDTH, CHARGE_Y + CHARGE_HEIGHT);
    myGLCD.fillRoundRect(CHARGE_X, CHARGE_Y, CHARGE_X + CHARGE_WIDTH, CHARGE_Y + CHARGE_HEIGHT);
    drawChargeCurrentBox(CHARGE_X + CHARGE_WIDTH / 2, CHARGE_Y, CHARGE_WIDTH);
}

void drawDriveCurrentBox(int centerX, int boxY, int boxWidth) {
    drawAmpereSymbol(centerX - BOX_SYMBOL_OFFSET, boxY + BOX_TEXT_MARGIN);
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(CHARGE_CURRENT_TEXT_COLOR);
    myGLCD.setBackColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.print("Drive", centerX - 15, boxY + BOX_LABEL_Y_OFFSET);

    char currentText[15];
    sprintf(currentText, "%d A", drivingAmp / 10);
    myGLCD.print(currentText, centerX - 15, boxY + BOX_VALUE_Y_OFFSET);
}

void drawTemperatureBox(int centerX, int boxY, int boxWidth) {
    drawThermometerIcon(centerX - BOX_SYMBOL_OFFSET, boxY + BOX_LABEL_Y_OFFSET);
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(CHARGE_CURRENT_TEXT_COLOR);
    myGLCD.setBackColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.print("Temp", centerX - 15, boxY + BOX_LABEL_Y_OFFSET);

    uint16_t avgTemp = 0;
    for (int i = 0; i < 20; i++) {
        avgTemp += cellTemp[i];
    }
    avgTemp /= 20;

    char tempText[15];
    sprintf(tempText, "%d C", avgTemp);
    myGLCD.print(tempText, centerX - 15, boxY + BOX_VALUE_Y_OFFSET);
}

void drawChargeCurrentBox(int centerX, int boxY, int boxWidth) {
    drawLightningBoltIcon(centerX - 20, boxY + 10);
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(CHARGE_CURRENT_TEXT_COLOR);
    myGLCD.setBackColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.print("Charge", centerX - 20, boxY + BOX_LABEL_Y_OFFSET);

    uint16_t avgChargingCurrent = 0;
    for (int i = 0; i < CHARGE_CURRENT_AVG_SAMPLES; i++) {
        avgChargingCurrent += chargingAmp[i];
    }
    avgChargingCurrent /= CHARGE_CURRENT_AVG_SAMPLES;

    char chargeText[15];
    sprintf(chargeText, "%d A", avgChargingCurrent);
    myGLCD.print(chargeText, centerX - 20, boxY + BOX_VALUE_Y_OFFSET);
}

// Icon Functions
void drawAmpereSymbol(int x, int y) {
    myGLCD.setColor(COLOR_CYAN); // Cyan
    myGLCD.drawLine(x, y, x, y + AMPERE_LINE_LENGTH);
    myGLCD.drawLine(x, y, x - AMPERE_ANGLE_LENGTH, y + AMPERE_ANGLE_LENGTH);
    myGLCD.drawLine(x, y, x + AMPERE_ANGLE_LENGTH, y + AMPERE_ANGLE_LENGTH);
}

void drawThermometerIcon(int x, int y) {
    myGLCD.setColor(COLOR_RED); // Red for thermometer color

    // Thermometer Bulb
    myGLCD.fillCircle(x + THERMO_BULB_RADIUS, y + 30, THERMO_BULB_RADIUS); // Bulb at the bottom

    // Thermometer Vertical Body
    myGLCD.drawRect(x + THERMO_BULB_RADIUS - THERMO_BODY_WIDTH / 2, y + 5, x + THERMO_BULB_RADIUS + THERMO_BODY_WIDTH / 2, y + 30);

    // Filled mercury level (example: 60% filled)
    myGLCD.setColor(COLOR_RED);
    myGLCD.fillRect(x + THERMO_BULB_RADIUS - THERMO_BODY_WIDTH / 2, y + 30 - THERMO_MERCURY_HEIGHT, x + THERMO_BULB_RADIUS + THERMO_BODY_WIDTH / 2, y + 30);
}

void drawLightningBoltIcon(int x, int y) {
    myGLCD.setColor(COLOR_YELLOW); // Yellow
    myGLCD.drawLine(x, y, x - LIGHTNING_SEGMENT_1, y + LIGHTNING_SEGMENT_2);
    myGLCD.drawLine(x - LIGHTNING_SEGMENT_1, y + LIGHTNING_SEGMENT_2, x - LIGHTNING_SEGMENT_2, y + LIGHTNING_SEGMENT_2);
    myGLCD.drawLine(x - LIGHTNING_SEGMENT_2, y + LIGHTNING_SEGMENT_2, x - LIGHTNING_SEGMENT_3, y + LIGHTNING_SEGMENT_4);
    myGLCD.drawLine(x - LIGHTNING_SEGMENT_3, y + LIGHTNING_SEGMENT_4, x - LIGHTNING_SEGMENT_4, y + LIGHTNING_SEGMENT_4);
    myGLCD.drawLine(x - LIGHTNING_SEGMENT_4, y + LIGHTNING_SEGMENT_4, x - LIGHTNING_SEGMENT_5, y + 25);
}



void efficiencyMeter(float efficiencyValue) {
    int centerX = 100;
    int centerY = 220;
    int outerRadius = 95;
    int innerRadius = 50;
   
    // Ensure efficiency value is within range
    efficiencyValue = constrain(efficiencyValue, 0, EFF_MAX_VALUE);
   
    // Draw thicker outer arc
    myGLCD.setColor(68, 68, 68); // Gray
    // Draw multiple lines with slight offset for thickness
    for(int r = outerRadius - 2; r <= outerRadius + 2; r++) {
        for(float angle = 180; angle <= 360; angle += 0.5) {
            float radian = radians(angle);
            int x = centerX + cos(radian) * r;
            int y = centerY + sin(radian) * r;
            myGLCD.drawPixel(x, y);
        }
    }
   
    // Draw inner arc with smoother edges
    myGLCD.setColor(COLOR_WHITE);
    for(float angle = 180; angle <= 360; angle += 0.5) {
        float radian = radians(angle);
        int x = centerX + cos(radian) * innerRadius;
        int y = centerY + sin(radian) * innerRadius;
        myGLCD.drawPixel(x, y);
    }
   
    // Draw the color zones (red, yellow, green)
    // 1. Red zone (0-3 km/kWh)
    drawColorZone(centerX, centerY, innerRadius + 5, outerRadius - 5, 180,
                 180 + (EFF_LOW_THRESHOLD / EFF_MAX_VALUE) * 180, EFF_COLOR_LOW);
   
    // 2. Yellow zone (3-7 km/kWh)
    drawColorZone(centerX, centerY, innerRadius + 5, outerRadius - 5,
                 180 + (EFF_LOW_THRESHOLD / EFF_MAX_VALUE) * 180,
                 180 + (EFF_MEDIUM_THRESHOLD / EFF_MAX_VALUE) * 180, EFF_COLOR_MEDIUM);
   
    // 3. Green zone (7-10 km/kWh)
    drawColorZone(centerX, centerY, innerRadius + 5, outerRadius - 5,
                 180 + (EFF_MEDIUM_THRESHOLD / EFF_MAX_VALUE) * 180, 360, EFF_COLOR_HIGH);
   
    // Draw major scale markings with thicker lines
    myGLCD.setColor(COLOR_WHITE);
    for(int i = 0; i <= 5; i++) {
        int angle = 180 + (i * 36); // Divide semicircle into 5 equal parts
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
    for(int i = 0; i < 10; i++) {
        if(i % 2 != 0) { // Skip major marks positions
            int angle = 180 + (i * 18); // Divide semicircle into 10 parts
            float radian = radians(angle);
            int x1 = centerX + cos(radian) * outerRadius;
            int y1 = centerY + sin(radian) * outerRadius;
            int x2 = centerX + cos(radian) * (outerRadius - 7);
            int y2 = centerY + sin(radian) * (outerRadius - 7);
            myGLCD.drawLine(x1, y1, x2, y2);
        }
    }
   
    // Draw numeric labels
    const char *labels[] = {"0", "2", "4", "6", "8", "10"};
    for(int i = 0; i < 6; i++) {
        int angle = 180 + (i * 36); // Match major marks positions
        int x = centerX + cos(radians(angle)) * (outerRadius - 30);
        int y = centerY + sin(radians(angle)) * (outerRadius - 30);
        myGLCD.print(labels[i], x - 8, y - 8);
    }
   
    // Draw needle
    int needleAngle = map(efficiencyValue * 100, 0, EFF_MAX_VALUE * 100, 180, 360);
    float needleRadian = radians(needleAngle);
   
    // Define needle starting radius
    int needleStartRadius = innerRadius + 5;
   
    // Calculate start and end points of needle
    int startX = centerX + cos(needleRadian) * needleStartRadius;
    int startY = centerY + sin(needleRadian) * needleStartRadius;
    int tipX = centerX + cos(needleRadian) * (outerRadius - 17);
    int tipY = centerY + sin(needleRadian) * (outerRadius - 17);
   
    // Draw white needle with triangle shape
    myGLCD.setColor(COLOR_GRAY);
    int baseWidth = 5;
   
    // Fill triangle for needle from start point to tip
    for(int i = -baseWidth; i <= baseWidth; i++) {
        int offsetX = startX + cos(needleRadian + radians(90)) * i;
        int offsetY = startY + sin(needleRadian + radians(90)) * i;
        myGLCD.drawLine(offsetX, offsetY, tipX, tipY);
    }
   
    // Use BigFont for larger efficiency value text
    myGLCD.setFont(BigFont);
   
    // Display efficiency value
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.setBackColor(COLOR_BLACK);
    char effText[10];
    sprintf(effText, "%.1f", efficiencyValue);
   
    // Center the text based on how many characters
    int textWidth = strlen(effText) * 16; // Approximate width of text
    myGLCD.print(effText, centerX - (textWidth / 2), 190);
   
    // Display unit label "Km/KwH" below the meter
    myGLCD.setFont(SmallFont);
    myGLCD.print("Km/KwH", centerX - 25, centerY + outerRadius + 150);
}

// Helper function to draw colored zones
void drawColorZone(int centerX, int centerY, int innerR, int outerR, float startAngle, float endAngle, uint16_t color) {
    myGLCD.setColor(color);
   
    // Draw colored arc using radial lines for smoother appearance
    for(float angle = startAngle; angle <= endAngle; angle += 0.5) {
        float radian = radians(angle);
        int x1 = centerX + cos(radian) * innerR;
        int y1 = centerY + sin(radian) * innerR;
        int x2 = centerX + cos(radian) * outerR;
        int y2 = centerY + sin(radian) * outerR;
        myGLCD.drawLine(x1, y1, x2, y2);
    }
}

void drawRightMetrics() {
    // Set up common visual properties
    myGLCD.setBackColor(COLOR_BLACK);
    
    // Speed Display
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.print("SPEED", RIGHT_METRICS_X, RIGHT_METRICS_Y);
    myGLCD.setFont(BigFont);
    myGLCD.setColor(COLOR_GREEN);
    char speedText[10];
    sprintf(speedText, "%d", speedVal);
    myGLCD.print(speedText, RIGHT_METRICS_X, RIGHT_METRICS_Y + 12);
    myGLCD.setFont(SmallFont);
    myGLCD.print("km/h", RIGHT_METRICS_X + strlen(speedText)*16, RIGHT_METRICS_Y + 17);
    
    // Range Display
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.print("RANGE", RIGHT_METRICS_X, RIGHT_METRICS_Y + METRIC_HEIGHT);
    myGLCD.setFont(BigFont);
    myGLCD.setColor(COLOR_YELLOW);
    char rangeText[10];
    sprintf(rangeText, "%d", range);
    myGLCD.print(rangeText, RIGHT_METRICS_X, RIGHT_METRICS_Y + METRIC_HEIGHT + 12);
    myGLCD.setFont(SmallFont);
    myGLCD.print("km", RIGHT_METRICS_X + strlen(rangeText)*16, RIGHT_METRICS_Y + METRIC_HEIGHT + 17);
    
    // Charging Time Display
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.print("CHARGE", RIGHT_METRICS_X, RIGHT_METRICS_Y + METRIC_HEIGHT * 2);
    myGLCD.setFont(BigFont);
    myGLCD.setColor(COLOR_CYAN);
    char timeText[10];
    sprintf(timeText, "%d", Charging_time);
    myGLCD.print(timeText, RIGHT_METRICS_X, RIGHT_METRICS_Y + METRIC_HEIGHT * 2 + 12);
    myGLCD.setFont(SmallFont);
    myGLCD.print("min", RIGHT_METRICS_X + strlen(timeText)*16, RIGHT_METRICS_Y + METRIC_HEIGHT * 2 + 17);
}

