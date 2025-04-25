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

// Text Alignment
#define TEXT_CENTER CENTER
#define TEXT_LEFT 0
#define TEXT_RIGHT 319

// Common Layout
#define TOUCH_PADDING 10
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

// Navigation Controls
#define BACK_X 10
#define BACK_Y 10
#define BACK_RADIUS 15

#define DETAILS_X 280
#define DETAILS_Y 215
#define DETAILS_RADIUS 15

// Back Button Styling
#define BACK_BUTTON_CENTER_X 25
#define BACK_BUTTON_CENTER_Y 25
#define BACK_BUTTON_RADIUS 15
#define BACK_BORDER_THICKNESS 3

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

// Speedometer
#define SPEEDO_CENTER_X 160
#define SPEEDO_CENTER_Y 210
#define SPEEDO_OUTER_RADIUS 108
#define SPEEDO_INNER_RADIUS 45
#define SPEEDO_START_ANGLE 180
#define SPEEDO_END_ANGLE 360
#define SPEEDO_MAJOR_TICK_STEP 20
#define SPEEDO_MINOR_TICK_STEP 10
#define SPEEDO_MINOR_START 190
#define SPEEDO_MINOR_END 350
#define SPEEDO_MAJOR_TICK_LENGTH 12
#define SPEEDO_MINOR_TICK_LENGTH 7
#define SPEEDO_LABEL_OFFSET 30
#define SPEEDO_TEXT_OFFSET 8
#define SPEEDO_NEEDLE_BASE_WIDTH 6
#define SPEEDO_NEEDLE_START_OFFSET 5
#define SPEEDO_NEEDLE_TIP_OFFSET 17
#define SPEEDO_SPEED_TEXT_X 142
#define SPEEDO_SPEED_TEXT_Y 180
#define SPEEDO_KM_TEXT_X 130
#define SPEEDO_KM_TEXT_Y 206
#define SPEEDO_ARC_THICKNESS 2

// Battery Display
#define BATTERY_CENTER_X 160
#define BATTERY_Y 10
#define BATTERY_WIDTH 200
#define BATTERY_HEIGHT 20

// Battery Detail Screen
#define BAT_SCREEN_WIDTH 40
#define BAT_SCREEN_HEIGHT 120
#define BAT_SCREEN_SPACING 10
#define BAT_SCREEN_START_X 60
#define BAT_SCREEN_START_Y 60
#define BAT_TERMINAL_WIDTH 20
#define BAT_TERMINAL_HEIGHT 10

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

// Deep Battery Analysis
#define DEEP_BAT_GRAPH_WIDTH 260
#define DEEP_BAT_GRAPH_HEIGHT 160
#define DEEP_BAT_GRAPH_X 45
#define DEEP_BAT_GRAPH_Y 45
#define DEEP_BAT_Y_DIVISIONS 5
#define DEEP_BAT_X_DIVISIONS 6
#define DEEP_BAT_CELLS 60
#define DEEP_BAT_CELL_STEP 10
#define DEEP_BAT_Y_TICK_LENGTH 5
#define DEEP_BAT_X_TICK_LENGTH 5
#define DEEP_BAT_VOLTAGE_LABEL_OFFSET 40
#define DEEP_BAT_Y_LABEL_OFFSET 4
#define DEEP_BAT_X_LABEL_OFFSET 10
#define DEEP_BAT_BOTTOM_LABEL_OFFSET 25
#define DEEP_BAT_CIRCLE_RADIUS 2
#define DEEP_BAT_TITLE_Y 10
#define DEEP_BAT_VOLTAGE_SCALE 10.0

// Temperature Graph
#define TEMP_GRAPH_WIDTH 280
#define TEMP_GRAPH_HEIGHT 120
#define TEMP_GRAPH_X 40
#define TEMP_GRAPH_Y 60
#define TEMP_BAR_WIDTH (TEMP_GRAPH_WIDTH / 18)
#define TEMP_AXIS_LABEL_OFFSET 35
#define TEMP_AXIS_TICK_LENGTH 5
#define TEMP_LABEL_MARGIN 4
#define TEMP_BOTTOM_LABEL_OFFSET 25
#define TEMP_STATS_OFFSET 40
#define TEMP_BAR_GAP 2

// Charge Graph
#define CHARGE_LEFT_MARGIN 40
#define CHARGE_RIGHT_MARGIN 40
#define CHARGE_TOP_MARGIN 80
#define CHARGE_BOTTOM_MARGIN 10
#define CHARGE_GRAPH_HEIGHT 100
#define CHARGE_BAR_WIDTH 15
#define CHARGE_BAR_SPACING 20
#define CHARGE_LEGEND_SQUARE_SIZE 15
#define CHARGE_LEGEND_VERTICAL_SPACING 20
#define CHARGE_LEGEND_X_OFFSET 90
#define CHARGE_TITLE_X 60
#define CHARGE_TITLE_Y 20
#define CHARGE_GRID_COLOR 50
#define CHARGE_Y_DIVISIONS 5
#define CHARGE_Y_LABEL_OFFSET 25
#define CHARGE_Y_TICK_LENGTH 3
#define CHARGE_VALUE_OFFSET 12
#define CHARGE_CHARGER_LABEL_OFFSET 5
#define CHARGE_BAR_PAIR_GAP 5
#define CHARGE_TEXT_WIDTH 8
#define CHARGE_AXIS_LINE_MARGIN 15
#define CHARGE_AXIS_TICK_OFFSET 4
#define CHARGE_GRID_COLOR_VALUE 50



#define UPDATE_INTERVAL 50

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

// Current screen state
ScreenState currentScreen = SCREEN_MAIN;

// Global Variables
uint16_t speedVal = 20;
uint8_t batCapacity[4] = {90, 90, 90, 90};
uint16_t cellVolt[60] = {
  27, 30, 33, 28, 31, 29, 35, 30, 32, 33,
  36, 37, 29, 34, 27, 30, 31, 35, 32, 34,
  29, 36, 30, 33, 31, 28, 35, 29, 34, 33,
  30, 32, 29, 36, 37, 31, 28, 34, 33, 30,
  35, 30, 27, 34, 29, 33, 32, 28, 31, 35,
  29, 36, 30, 32, 34, 28, 31, 30, 33, 36
};

uint8_t cellTemp[20] = {40, 21, 43, 35, 32, 40, 21, 43, 35, 32, 40, 21, 43, 35, 32, 40, 21, 43, 35, 32};
uint16_t drivingAmp = 344;
uint16_t chargingAmp[4] = {0, 23, 45, 12};
uint8_t chargerTemp[4] = {23, 54, 98, 44};
uint32_t km = 543219;

class Speedometer {
private:
    int lastSpeed = -1;
    long lastKm = -1;
    bool initialized = false;
    const char* labels[10] = {"0", "20", "40", "60", "80", "100", "120", "140", "160", "180"};
    int labelAngles[10] = {180, 200, 220, 240, 260, 280, 300, 320, 340, 360};

    void drawLabel(int index) {
        int x = SPEEDO_CENTER_X + cos(radians(labelAngles[index])) * (SPEEDO_OUTER_RADIUS - SPEEDO_LABEL_OFFSET);
        int y = SPEEDO_CENTER_Y + sin(radians(labelAngles[index])) * (SPEEDO_OUTER_RADIUS - SPEEDO_LABEL_OFFSET);
        myGLCD.setBackColor(COLOR_BLACK);
        myGLCD.print(labels[index], x - SPEEDO_TEXT_OFFSET, y - SPEEDO_TEXT_OFFSET);
    }

    // Check if a label might be affected by the needle at a given angle
    bool isLabelAffected(int labelIndex, int needleAngle) {
        int labelAngle = labelAngles[labelIndex];
        // Create a window around the needle angle where labels might be affected
        int windowSize = 15; // Adjust based on your needs
        int minAngle = needleAngle - windowSize;
        int maxAngle = needleAngle + windowSize;
       
        return (labelAngle >= minAngle && labelAngle <= maxAngle);
    }

    void redrawAffectedLabels(int oldAngle, int newAngle) {
        // Check and redraw any labels that might have been affected by either the old or new needle position
        myGLCD.setColor(COLOR_WHITE);
        for (int i = 0; i < 10; i++) {
            if (isLabelAffected(i, oldAngle) || isLabelAffected(i, newAngle)) {
                drawLabel(i);
            }
        }
    }

    void eraseNeedle(int angle) {
        float radian = radians(angle);
        int needleStartRadius = SPEEDO_INNER_RADIUS + SPEEDO_NEEDLE_START_OFFSET;
        int startX = SPEEDO_CENTER_X + cos(radian) * needleStartRadius;
        int startY = SPEEDO_CENTER_Y + sin(radian) * needleStartRadius;
        int tipX = SPEEDO_CENTER_X + cos(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_NEEDLE_TIP_OFFSET);
        int tipY = SPEEDO_CENTER_Y + sin(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_NEEDLE_TIP_OFFSET);

        myGLCD.setColor(COLOR_BLACK);
        for (int i = -SPEEDO_NEEDLE_BASE_WIDTH; i <= SPEEDO_NEEDLE_BASE_WIDTH; i++) {
            int offsetX = startX + cos(radian + radians(90)) * i;
            int offsetY = startY + sin(radian + radians(90)) * i;
            myGLCD.drawLine(offsetX, offsetY, tipX, tipY);
        }
    }

    void drawNeedle(int angle) {
        float radian = radians(angle);
        int needleStartRadius = SPEEDO_INNER_RADIUS + SPEEDO_NEEDLE_START_OFFSET;
        int startX = SPEEDO_CENTER_X + cos(radian) * needleStartRadius;
        int startY = SPEEDO_CENTER_Y + sin(radian) * needleStartRadius;
        int tipX = SPEEDO_CENTER_X + cos(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_NEEDLE_TIP_OFFSET);
        int tipY = SPEEDO_CENTER_Y + sin(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_NEEDLE_TIP_OFFSET);

        myGLCD.setColor(COLOR_RED);
        for (int i = -SPEEDO_NEEDLE_BASE_WIDTH; i <= SPEEDO_NEEDLE_BASE_WIDTH; i++) {
            int offsetX = startX + cos(radian + radians(90)) * i;
            int offsetY = startY + sin(radian + radians(90)) * i;
            myGLCD.drawLine(offsetX, offsetY, tipX, tipY);
        }
    }

    void drawStaticElements() {
        // Draw outer arc
        myGLCD.setColor(COLOR_GRAY);
        for (int r = SPEEDO_OUTER_RADIUS - SPEEDO_ARC_THICKNESS; r <= SPEEDO_OUTER_RADIUS + SPEEDO_ARC_THICKNESS; r++) {
            for (float angle = SPEEDO_START_ANGLE; angle <= SPEEDO_END_ANGLE; angle += 0.5) {
                float radian = radians(angle);
                int x = SPEEDO_CENTER_X + cos(radian) * r;
                int y = SPEEDO_CENTER_Y + sin(radian) * r;
                myGLCD.drawPixel(x, y);
            }
        }

        drawScaleMarkings();
        drawAllLabels();
    }

    void drawAllLabels() {
        myGLCD.setColor(COLOR_WHITE);
        for (int i = 0; i < 10; i++) {
            drawLabel(i);
        }
    }

    void drawScaleMarkings() {
        // Draw major scale markings
        myGLCD.setColor(COLOR_WHITE);
        for (int angle = SPEEDO_START_ANGLE; angle <= SPEEDO_END_ANGLE; angle += SPEEDO_MAJOR_TICK_STEP) {
            float radian = radians(angle);
            for (int w = -1; w <= 1; w++) {
                int x1 = SPEEDO_CENTER_X + cos(radian) * (SPEEDO_OUTER_RADIUS + w);
                int y1 = SPEEDO_CENTER_Y + sin(radian) * (SPEEDO_OUTER_RADIUS + w);
                int x2 = SPEEDO_CENTER_X + cos(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_MAJOR_TICK_LENGTH + w);
                int y2 = SPEEDO_CENTER_Y + sin(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_MAJOR_TICK_LENGTH + w);
                myGLCD.drawLine(x1, y1, x2, y2);
            }
        }

        // Draw minor scale markings
        for (int angle = SPEEDO_MINOR_START; angle <= SPEEDO_MINOR_END; angle += SPEEDO_MINOR_TICK_STEP) {
            float radian = radians(angle);
            int x1 = SPEEDO_CENTER_X + cos(radian) * SPEEDO_OUTER_RADIUS;
            int y1 = SPEEDO_CENTER_Y + sin(radian) * SPEEDO_OUTER_RADIUS;
            int x2 = SPEEDO_CENTER_X + cos(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_MINOR_TICK_LENGTH);
            int y2 = SPEEDO_CENTER_Y + sin(radian) * (SPEEDO_OUTER_RADIUS - SPEEDO_MINOR_TICK_LENGTH);
            myGLCD.drawLine(x1, y1, x2, y2);
        }
       
        // Draw inner arc
        myGLCD.setColor(COLOR_WHITE);
        for (float angle = SPEEDO_START_ANGLE; angle <= SPEEDO_END_ANGLE; angle += 0.5) {
            float radian = radians(angle);
            int x = SPEEDO_CENTER_X + cos(radian) * SPEEDO_INNER_RADIUS;
            int y = SPEEDO_CENTER_Y + sin(radian) * SPEEDO_INNER_RADIUS;
            myGLCD.drawPixel(x, y);
        }

    }

    void updateSpeedText(int speedval) {
        // Clear speed text area
        myGLCD.setColor(COLOR_BLACK);
        myGLCD.fillRect(SPEEDO_SPEED_TEXT_X, SPEEDO_SPEED_TEXT_Y,
                        SPEEDO_SPEED_TEXT_X + 50, SPEEDO_SPEED_TEXT_Y + 16);
       
        // Draw new speed
        myGLCD.setFont(BigFont);
        myGLCD.setColor(COLOR_WHITE);
        myGLCD.setBackColor(COLOR_BLACK);
        char speedText[5];
        sprintf(speedText, "%d", speedval);
        myGLCD.print(speedText, SPEEDO_SPEED_TEXT_X, SPEEDO_SPEED_TEXT_Y);
    }

    void updateKmText(long kmval) {
        // Clear km text area
        myGLCD.setColor(COLOR_BLACK);
        myGLCD.fillRect(SPEEDO_KM_TEXT_X, SPEEDO_KM_TEXT_Y,
                        SPEEDO_KM_TEXT_X + 70, SPEEDO_KM_TEXT_Y + 8);
       
        // Draw new km
        myGLCD.setFont(SmallFont);
        myGLCD.setColor(COLOR_WHITE);
        myGLCD.setBackColor(COLOR_BLACK);
        char milesText[20];
        sprintf(milesText, "%ld KM", kmval);
        myGLCD.print(milesText, SPEEDO_KM_TEXT_X, SPEEDO_KM_TEXT_Y);
    }

public:
    void init() {
        // Clear speedometer area
        myGLCD.setColor(COLOR_BLACK);
        myGLCD.fillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
       
        // Draw static elements
        drawStaticElements();
        initialized = true;
    }

    void update(int speedval, long kmval) {
        if (!initialized) {
            init();
        }

        // Update speed needle if changed
        if (speedval != lastSpeed) {
            int oldAngle = map(lastSpeed, 0, 180, SPEEDO_START_ANGLE, SPEEDO_END_ANGLE);
            int newAngle = map(speedval, 0, 180, SPEEDO_START_ANGLE, SPEEDO_END_ANGLE);
           
            if (lastSpeed >= 0) {
                eraseNeedle(oldAngle);
                // Redraw potentially affected labels after erasing old needle
                redrawAffectedLabels(oldAngle, newAngle);
            }
           
            drawNeedle(newAngle);
            // Redraw any labels that might be covered by the new needle
            redrawAffectedLabels(oldAngle, newAngle);
           
            updateSpeedText(speedval);
            lastSpeed = speedval;
        }
       
        // Update KM if changed
        if (kmval != lastKm) {
            updateKmText(kmval);
            lastKm = kmval;
        }
    }
};

class BatteryIndicator {
private:
    uint16_t currentCapacity = 0;
    uint16_t lastCapacity = -1;
    bool initialized = false;
   
    void drawBatteryOutline() {
        // Battery outline
        myGLCD.setColor(COLOR_BATTERY_OUTLINE);
        myGLCD.drawRoundRect(BATTERY_CENTER_X - BATTERY_WIDTH/2, BATTERY_Y,
                        BATTERY_CENTER_X + BATTERY_WIDTH/2, BATTERY_Y + BATTERY_HEIGHT);
       
        // Battery terminal
        myGLCD.fillRect(BATTERY_CENTER_X + BATTERY_WIDTH/2 + BATTERY_TERMINAL_OFFSET,
                        BATTERY_Y + BATTERY_TERMINAL_MARGIN,
                        BATTERY_CENTER_X + BATTERY_WIDTH/2 + BATTERY_TERMINAL_OFFSET + BATTERY_TERMINAL_WIDTH,
                        BATTERY_Y + BATTERY_HEIGHT - BATTERY_TERMINAL_MARGIN);
    }
   
    void eraseBatteryFill() {
        myGLCD.setColor(COLOR_BLACK);
        myGLCD.fillRect(BATTERY_CENTER_X - BATTERY_WIDTH/2 + 1, BATTERY_Y + 1,
                        BATTERY_CENTER_X + BATTERY_WIDTH/2 - 1,
                        BATTERY_Y + BATTERY_HEIGHT - 1);
    }
   
    void drawBatteryFill(int fillWidth) {
        if(fillWidth <= 0) return;
       
        // Set appropriate color based on capacity
        if(currentCapacity > BATTERY_HIGH_THRESHOLD) {
            myGLCD.setColor(COLOR_BATTERY_HIGH);
        } else if(currentCapacity > BATTERY_MEDIUM_THRESHOLD) {
            myGLCD.setColor(COLOR_BATTERY_MEDIUM);
        } else {
            myGLCD.setColor(COLOR_BATTERY_LOW);
        }
       
        myGLCD.fillRoundRect(BATTERY_CENTER_X - BATTERY_WIDTH/2 + 2, BATTERY_Y + 2,
                            BATTERY_CENTER_X - BATTERY_WIDTH/2 + 2 + fillWidth,
                            BATTERY_Y + BATTERY_HEIGHT - 2);
    }
   
    void updateCapacityText() {
        // Clear text area
        myGLCD.setColor(COLOR_BLACK);
        myGLCD.fillRect(BATTERY_CENTER_X + BATTERY_WIDTH/2 + 15, BATTERY_Y,
                        BATTERY_CENTER_X + BATTERY_WIDTH/2 + 45, BATTERY_Y + 16);
       
        // Draw new percentage
        myGLCD.setFont(SmallFont);
        myGLCD.setColor(COLOR_BATTERY_TEXT);
        myGLCD.setBackColor(COLOR_BLACK);
        char batText[10];
        sprintf(batText, "%d%%", currentCapacity);
        myGLCD.print(batText, BATTERY_CENTER_X + BATTERY_WIDTH/2 + 15, BATTERY_Y + 4);
    }
   
    uint16_t calculateAverageCapacity() {
        uint16_t avgCapacity = 0;
        for(int i = 0; i < 4; i++) {
            avgCapacity += batCapacity[i];
        }
        return avgCapacity / 4;
    }

public:
    void init() {
        drawBatteryOutline();
        initialized = true;
    }
   
    void update() {
        if (!initialized) {
            init();
        }
        currentCapacity = calculateAverageCapacity();
        // Only update display if capacity changed
        if(currentCapacity != lastCapacity) {
            // Calculate battery fill width
            int fillWidth = map(currentCapacity, 0, 100, 0, BATTERY_WIDTH - 4);
           
            // Redraw components
            eraseBatteryFill();
            //drawBatteryOutline(); // Ensure outline is intact
            drawBatteryFill(fillWidth);
            updateCapacityText();
            lastCapacity = currentCapacity;
        }
    }
};











// Add these global variables
Speedometer speedo;
BatteryIndicator battery;
unsigned long lastUpdate = 0;


// Touch area check functions
bool isTouchInDriveArea(uint16_t x, uint16_t y) {
  return (x >= (DRIVE_X - TOUCH_PADDING) &&
          x <= (DRIVE_X + DRIVE_WIDTH + TOUCH_PADDING) &&
          y >= (DRIVE_Y - TOUCH_PADDING) &&
          y <= (DRIVE_Y + DRIVE_HEIGHT + TOUCH_PADDING));
}

bool isTouchInTempArea(uint16_t x, uint16_t y) {
  return (x >= (TEMP_X - TOUCH_PADDING) &&
          x <= (TEMP_X + TEMP_WIDTH + TOUCH_PADDING) &&
          y >= (TEMP_Y - TOUCH_PADDING) &&
          y <= (TEMP_Y + TEMP_HEIGHT + TOUCH_PADDING));
}

bool isTouchInChargeArea(uint16_t x, uint16_t y) {
  return (x >= (CHARGE_X - TOUCH_PADDING) &&
          x <= (CHARGE_X + CHARGE_WIDTH + TOUCH_PADDING) &&
          y >= (CHARGE_Y - TOUCH_PADDING) &&
          y <= (CHARGE_Y + CHARGE_HEIGHT + TOUCH_PADDING));
}

bool isTouchInBackButton(uint16_t x, uint16_t y) {
  return (x >= (BACK_X - BACK_RADIUS - TOUCH_PADDING) &&
          x <= (BACK_X + BACK_RADIUS + TOUCH_PADDING) &&
          y >= (BACK_Y - BACK_RADIUS - TOUCH_PADDING) &&
          y <= (BACK_Y + BACK_RADIUS + TOUCH_PADDING));
}

bool isTouchInDetailsButton(uint16_t x, uint16_t y) {
  return (x >= (DETAILS_X - DETAILS_RADIUS - TOUCH_PADDING) &&
          x <= (DETAILS_X + DETAILS_RADIUS + TOUCH_PADDING) &&
          y >= (DETAILS_Y - DETAILS_RADIUS - TOUCH_PADDING) &&
          y <= (DETAILS_Y + DETAILS_RADIUS + TOUCH_PADDING));
}

// Function to handle screen transitions
void switchScreen(ScreenState newScreen) {
  // Clear the current screen
  myGLCD.clrScr();

  // Update the current screen state
  currentScreen = newScreen;

  // Call appropriate screen function
  switch (currentScreen) {
    case SCREEN_MAIN:
      mainScreen();
      break;
    case SCREEN_BATTERY:
      batScreen();
      break;
    case SCREEN_DEEP_BATTERY:
      deepBatScreen();
      break;
    case SCREEN_TEMP:
      tempScreen();
      break;
    case SCREEN_CHARGER:
      chargeScreen();
      break;
  }
}

// Touch handling functions for each screen
void handleMainScreenTouch(point_t p) {
  if (isTouchInDriveArea(p.x, p.y)) {
    switchScreen(SCREEN_BATTERY);
  }
  else if (isTouchInTempArea(p.x, p.y)) {
    switchScreen(SCREEN_TEMP);
  }
  else if (isTouchInChargeArea(p.x, p.y)) {
    switchScreen(SCREEN_CHARGER);
  }
}

void handleBatteryScreenTouch(point_t p) {
  if (isTouchInBackButton(p.x, p.y)) {
    switchScreen(SCREEN_MAIN);
  }
  else if (isTouchInDetailsButton(p.x, p.y)) {
    switchScreen(SCREEN_DEEP_BATTERY);
  }
}

void handleDeepBatteryScreenTouch(point_t p) {
  if (isTouchInBackButton(p.x, p.y)) {
    switchScreen(SCREEN_BATTERY);
  }
}

void handleChargerScreenTouch(point_t p) {
  if (isTouchInBackButton(p.x, p.y)) {
    switchScreen(SCREEN_MAIN);
  }
}

void handleTempScreenTouch(point_t p) {
  if (isTouchInBackButton(p.x, p.y)) {
    switchScreen(SCREEN_MAIN);
  }
}

// Main setup function
void setup() {
  Serial.begin(9600);
  // Setup the LCD
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  myTouch.init(320, 200, 3900, 3900);
  mainScreen();
}





// FOR SIMULATING SPEED
bool increasing = true;
const int SPEED_STEP = 1;           // How much to change speed each update
const int SPEED_MIN = 0;            // Minimum speed value
const int SPEED_MAX = 180;          // Maximum speed value
const int KM_INCREMENT = 1;         // How much to increment KM each update
unsigned long speedUpdateInterval = 50;  // Update speed every 50ms
unsigned long lastSpeedUpdate = 0;




// Main loop with screen management and touch handling
void loop() {
  if (myTouch.touchEvent()) {
    point_t p = myTouch.readTouch();

    // Handle touch based on current screen
    switch (currentScreen) {
      case SCREEN_MAIN:
        handleMainScreenTouch(p);
        break;
      case SCREEN_BATTERY:
        handleBatteryScreenTouch(p);
        break;
      case SCREEN_DEEP_BATTERY:
        handleDeepBatteryScreenTouch(p);
        break;
      case SCREEN_CHARGER:
        handleChargerScreenTouch(p);
        break;
      case SCREEN_TEMP:
        handleTempScreenTouch(p);
        break;
    }
  }

  // Inside the main loop where speedometer updates
if (currentScreen == SCREEN_MAIN) {
    unsigned long currentTime = millis();
   
    // Update speed and km values
    if (currentTime - lastSpeedUpdate >= speedUpdateInterval) {
        // Update speed value
        if (increasing) {
            speedVal += SPEED_STEP;
            if (speedVal >= SPEED_MAX) {
                increasing = false;
            }
        } else {
            speedVal -= SPEED_STEP;
            if (speedVal <= SPEED_MIN) {
                increasing = true;
            }
        }

        // Separately update battery values
        if (increasing) {
            for(int i = 0; i < 4; i++) {
                if (batCapacity[i] < 100) {
                    batCapacity[i]++;
                }
            }
        } else {
            for(int i = 0; i < 4; i++) {
                if (batCapacity[i] > 0) {
                    batCapacity[i]--;
                }
            }
        }

        // Update kilometer value
        km += KM_INCREMENT;
        // Update the speedometer display


                // Update cell temperatures (20-30°C range)
        for (int i = 0; i < 20; i++) {
            if (increasing) {
                if (cellTemp[i] < 30) {
                    cellTemp[i]++;
                }
            } else {
                if (cellTemp[i] > 20) {
                    cellTemp[i]--;
                }
            }
        }
       
        // Update driving current (300-400A range)
        if (increasing) {
            if (drivingAmp < 400) {
                drivingAmp++;
            }
        } else {
            if (drivingAmp > 300) {
                drivingAmp--;
            }
        }
       
        // Update charging currents (20-30A range)
        for (int i = 0; i < 4; i++) {
            if (increasing) {
                if (chargingAmp[i] < 30) {
                    chargingAmp[i]++;
                }
            } else {
                if (chargingAmp[i] > 20) {
                    chargingAmp[i]--;
                }
            }
    }
        speedo.update(speedVal, km);
        battery.update();
        indicatorUpdate();

        uint16_t avgTemp = 0;
        for (int i = 0; i < 20; i++) avgTemp += cellTemp[i];
        avgTemp /= 20;
        
        uint16_t avgChargingCurrent = 0;
        for (int i = 0; i < 4; i++) avgChargingCurrent += chargingAmp[i];
        avgChargingCurrent /= 4;
        
        Serial.print("Speed:");
        Serial.print(speedVal);
        Serial.print(",Temp:");
        Serial.print(avgTemp);
        Serial.print(",Drive:");
        Serial.print(drivingAmp / 10);
        Serial.print(",SOC:");
        Serial.println(avgChargingCurrent);
       
        lastSpeedUpdate = currentTime;
    }
}
}



void mainScreen()
{
    speedo.init();
    battery.init();
    drawIndicators();
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

void indicatorUpdate() {
    // Update Drive Current value
    // First, erase the old value
    myGLCD.setColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.fillRect(DRIVE_X + 10, DRIVE_Y + BOX_VALUE_Y_OFFSET,
                    DRIVE_X + DRIVE_WIDTH - 10, DRIVE_Y + BOX_VALUE_Y_OFFSET + 16);
   
    // Then draw the new value
    myGLCD.setFont(SmallFont);
    myGLCD.setColor(CHARGE_CURRENT_TEXT_COLOR);
    myGLCD.setBackColor(CHARGE_CURRENT_BACKGROUND_COLOR);
   
    char currentText[15];
    sprintf(currentText, "%d A", drivingAmp / 10);
    myGLCD.print(currentText, DRIVE_X + DRIVE_WIDTH / 2 - 15, DRIVE_Y + BOX_VALUE_Y_OFFSET);
   
    // Update Temperature value
    // First, erase the old value
    myGLCD.setColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.fillRect(TEMP_X + 10, TEMP_Y + BOX_VALUE_Y_OFFSET,
                   TEMP_X + TEMP_WIDTH - 10, TEMP_Y + BOX_VALUE_Y_OFFSET + 16);
   
    // Then draw the new value
    myGLCD.setColor(CHARGE_CURRENT_TEXT_COLOR);
    myGLCD.setBackColor(CHARGE_CURRENT_BACKGROUND_COLOR);
   
    uint16_t avgTemp = 0;
    for (int i = 0; i < 20; i++) {
        avgTemp += cellTemp[i];
    }
    avgTemp /= 20;
   
    char tempText[15];
    sprintf(tempText, "%d C", avgTemp);
    myGLCD.print(tempText, TEMP_X + TEMP_WIDTH / 2 - 15, TEMP_Y + BOX_VALUE_Y_OFFSET);
   
    // Update Charge Current value
    // First, erase the old value
    myGLCD.setColor(CHARGE_CURRENT_BACKGROUND_COLOR);
    myGLCD.fillRect(CHARGE_X + 10, CHARGE_Y + BOX_VALUE_Y_OFFSET,
                    CHARGE_X + CHARGE_WIDTH - 10, CHARGE_Y + BOX_VALUE_Y_OFFSET + 16);
   
    // Then draw the new value
    myGLCD.setColor(CHARGE_CURRENT_TEXT_COLOR);
    myGLCD.setBackColor(CHARGE_CURRENT_BACKGROUND_COLOR);
   
    uint16_t avgChargingCurrent = 0;
    for (int i = 0; i < CHARGE_CURRENT_AVG_SAMPLES; i++) {
        avgChargingCurrent += chargingAmp[i];
    }
    avgChargingCurrent /= CHARGE_CURRENT_AVG_SAMPLES;
   
    char chargeText[15];
    sprintf(chargeText, "%d A", avgChargingCurrent);
    myGLCD.print(chargeText, CHARGE_X + CHARGE_WIDTH / 2 - 20, CHARGE_Y + BOX_VALUE_Y_OFFSET);
}

void batScreen() {
  // Clear screen
  myGLCD.setColor(COLOR_BLACK);
  myGLCD.fillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

  // Main heading
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(COLOR_BLACK);
  myGLCD.print("Block Capacity", 55, 20);

  // Draw back button in top left corner
  // Fill button with color
  myGLCD.setColor(COLOR_LIGHT_BLUE);
  myGLCD.fillCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS);

  // Draw button border
  myGLCD.setColor(COLOR_BLUE);
  for (int i = 0; i < BACK_BORDER_THICKNESS; i++) {
    myGLCD.drawCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS - i);
  }

  // Draw white arrow inside button (pointing left)
  myGLCD.setColor(COLOR_WHITE);
  // Arrow shaft
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X + 6, BACK_BUTTON_CENTER_Y);
  // Arrow head
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y - 4);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y + 4);

  // Draw 4 batteries
  for (int i = 0; i < 4; i++) {
    // Battery terminal (tip on top)
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.fillRect(BAT_SCREEN_START_X + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING) + (BAT_SCREEN_WIDTH - BAT_TERMINAL_WIDTH) / 2,
                    BAT_SCREEN_START_Y - BAT_TERMINAL_HEIGHT,
                    BAT_SCREEN_START_X + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING) + (BAT_SCREEN_WIDTH + BAT_TERMINAL_WIDTH) / 2,
                    BAT_SCREEN_START_Y);

    // Battery outline (white)
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.drawRoundRect(BAT_SCREEN_START_X + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING),
                    BAT_SCREEN_START_Y,
                    BAT_SCREEN_START_X + BAT_SCREEN_WIDTH + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING),
                    BAT_SCREEN_START_Y + BAT_SCREEN_HEIGHT);

    // Calculate fill height based on capacity
    int fillHeight = map(batCapacity[i], 0, 100, 0, BAT_SCREEN_HEIGHT);

    // Fill color based on capacity
    if (batCapacity[i] > 70)
      myGLCD.setColor(COLOR_GREEN);
    else if (batCapacity[i] > 30)
      myGLCD.setColor(COLOR_YELLOW);
    else
      myGLCD.setColor(COLOR_RED);

    // Fill battery
    myGLCD.fillRoundRect(
      BAT_SCREEN_START_X + 2 + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING),
      BAT_SCREEN_START_Y + BAT_SCREEN_HEIGHT - fillHeight,
      BAT_SCREEN_START_X + BAT_SCREEN_WIDTH - 2 + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING),
      BAT_SCREEN_START_Y + BAT_SCREEN_HEIGHT - 5
    );

    // Display capacity percentage
    myGLCD.setColor(COLOR_WHITE);
    myGLCD.setFont(SmallFont);
    char capText[5];
    sprintf(capText, "%d%%", batCapacity[i]);
    myGLCD.print(capText,
                 BAT_SCREEN_START_X + i * (BAT_SCREEN_WIDTH + BAT_SCREEN_SPACING) + 10,
                 BAT_SCREEN_START_Y + BAT_SCREEN_HEIGHT + 10);
  }

  // Draw round button in bottom right corner
  // Fill button with color
  myGLCD.setColor(COLOR_LIGHT_BLUE);
  myGLCD.fillCircle(DETAILS_X, DETAILS_Y, BACK_BUTTON_RADIUS);

  // Draw button border
  myGLCD.setColor(COLOR_BLUE);
  for (int i = 0; i < BACK_BORDER_THICKNESS; i++) {
    myGLCD.drawCircle(DETAILS_X, DETAILS_Y, BACK_BUTTON_RADIUS - i);
  }

  // Draw white arrow inside button
  myGLCD.setColor(COLOR_WHITE);
  // Arrow shaft
  myGLCD.drawLine(DETAILS_X - 6, DETAILS_Y,
                  DETAILS_X + 6, DETAILS_Y);
  // Arrow head
  myGLCD.drawLine(DETAILS_X + 6, DETAILS_Y,
                  DETAILS_X + 2, DETAILS_Y - 4);
  myGLCD.drawLine(DETAILS_X + 6, DETAILS_Y,
                  DETAILS_X + 2, DETAILS_Y + 4);

  // Button text - on left side
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.print("View Details", DETAILS_X - 120, DETAILS_Y - 8);
}

void chargeScreen() {
  // Clear screen
  myGLCD.setColor(COLOR_BLACK);
  myGLCD.fillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

  // Add back button
  myGLCD.setColor(COLOR_LIGHT_BLUE);
  myGLCD.fillCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS);
  myGLCD.setColor(COLOR_CYAN);
  for (int i = 0; i < BACK_BORDER_THICKNESS; i++) {
    myGLCD.drawCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS - i);
  }

  // Draw back arrow
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X + 6, BACK_BUTTON_CENTER_Y);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y - 4);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y + 4);

  // Calculate graph dimensions
  const int graphWidth = SCREEN_WIDTH - CHARGE_LEFT_MARGIN - CHARGE_RIGHT_MARGIN;
  const int graphBottom = CHARGE_TOP_MARGIN + CHARGE_GRAPH_HEIGHT;

  // Draw title
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.setFont(BigFont);
  myGLCD.print("Charging Status", CHARGE_TITLE_X, CHARGE_TITLE_Y);

  // Draw axes
  myGLCD.setFont(SmallFont);

  // Left Y-axis (Current)
  myGLCD.setColor(COLOR_YELLOW);
  myGLCD.drawLine(CHARGE_LEFT_MARGIN, CHARGE_TOP_MARGIN,
                  CHARGE_LEFT_MARGIN, graphBottom);
  myGLCD.print("Current (A)", CHARGE_LEFT_MARGIN - CHARGE_Y_LABEL_OFFSET,
               CHARGE_TOP_MARGIN - CHARGE_AXIS_LINE_MARGIN);

  // Right Y-axis (Temperature)
  myGLCD.setColor(COLOR_SADDLE_BROWN);
  myGLCD.drawLine(SCREEN_WIDTH - CHARGE_RIGHT_MARGIN, CHARGE_TOP_MARGIN,
                  SCREEN_WIDTH - CHARGE_RIGHT_MARGIN, graphBottom);
  myGLCD.print("Temp (C)", SCREEN_WIDTH - CHARGE_RIGHT_MARGIN + CHARGE_Y_TICK_LENGTH,
               CHARGE_TOP_MARGIN - CHARGE_AXIS_LINE_MARGIN);

  // X-axis
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.drawLine(CHARGE_LEFT_MARGIN, graphBottom,
                  SCREEN_WIDTH - CHARGE_RIGHT_MARGIN, graphBottom);

  // Find max values for scaling
  uint16_t maxCurrent = 0;
  uint8_t maxTemp = 0;
  for (int i = 0; i < 4; i++) {
    if (chargingAmp[i] > maxCurrent) maxCurrent = chargingAmp[i];
    if (chargerTemp[i] > maxTemp) maxTemp = chargerTemp[i];
  }
  maxCurrent = ((maxCurrent + 9) / 10) * 10;
  maxTemp = ((maxTemp + 9) / 10) * 10;

  // Draw Y-axis markings
  myGLCD.setFont(SmallFont);

  // Current axis markings (left)
  for (int i = 0; i <= CHARGE_Y_DIVISIONS; i++) {
    int y = graphBottom - (i * CHARGE_GRAPH_HEIGHT / CHARGE_Y_DIVISIONS);
    int value = (i * maxCurrent) / CHARGE_Y_DIVISIONS;
    char valStr[10];
    sprintf(valStr, "%d", value);
    myGLCD.setColor(COLOR_YELLOW);
    myGLCD.print(valStr, CHARGE_LEFT_MARGIN - CHARGE_Y_LABEL_OFFSET,
                 y - CHARGE_AXIS_TICK_OFFSET);
    myGLCD.drawLine(CHARGE_LEFT_MARGIN - CHARGE_Y_TICK_LENGTH, y,
                    CHARGE_LEFT_MARGIN, y);
  }

  // Temperature axis markings (right)
  for (int i = 0; i <= CHARGE_Y_DIVISIONS; i++) {
    int y = graphBottom - (i * CHARGE_GRAPH_HEIGHT / CHARGE_Y_DIVISIONS);
    int value = (i * maxTemp) / CHARGE_Y_DIVISIONS;
    char valStr[10];
    sprintf(valStr, "%d", value);
    myGLCD.setColor(COLOR_SADDLE_BROWN);
    myGLCD.print(valStr, SCREEN_WIDTH - CHARGE_RIGHT_MARGIN + CHARGE_Y_TICK_LENGTH,
                 y - CHARGE_AXIS_TICK_OFFSET);
    myGLCD.drawLine(SCREEN_WIDTH - CHARGE_RIGHT_MARGIN, y,
                    SCREEN_WIDTH - CHARGE_RIGHT_MARGIN + CHARGE_Y_TICK_LENGTH, y);
  }

  // Draw grid lines
  myGLCD.setColor(CHARGE_GRID_COLOR_VALUE, CHARGE_GRID_COLOR_VALUE, CHARGE_GRID_COLOR_VALUE);
  for (int i = 1; i < CHARGE_Y_DIVISIONS; i++) {
    int y = graphBottom - (i * CHARGE_GRAPH_HEIGHT / CHARGE_Y_DIVISIONS);
    myGLCD.drawLine(CHARGE_LEFT_MARGIN, y, SCREEN_WIDTH - CHARGE_RIGHT_MARGIN, y);
  }

  // Calculate total width needed for all bars
  const int totalBarsWidth = 4 * (CHARGE_BAR_WIDTH * 2 + CHARGE_BAR_PAIR_GAP) +
                             3 * CHARGE_BAR_SPACING;
  const int startX = CHARGE_LEFT_MARGIN + (graphWidth - totalBarsWidth) / 2;

  // Draw bars for each charger
  for (int i = 0; i < 4; i++) {
    int blockX = startX + i * (CHARGE_BAR_WIDTH * 2 + CHARGE_BAR_PAIR_GAP + CHARGE_BAR_SPACING);

    // Draw current bar
    int currentHeight = (chargingAmp[i] * CHARGE_GRAPH_HEIGHT) / maxCurrent;
    myGLCD.setColor(COLOR_YELLOW);
    myGLCD.fillRect(blockX,
                    graphBottom - currentHeight,
                    blockX + CHARGE_BAR_WIDTH,
                    graphBottom);

    // Draw temperature bar
    int tempHeight = (chargerTemp[i] * CHARGE_GRAPH_HEIGHT) / maxTemp;
    myGLCD.setColor(COLOR_SADDLE_BROWN);
    myGLCD.fillRect(blockX + CHARGE_BAR_WIDTH + CHARGE_BAR_PAIR_GAP,
                    graphBottom - tempHeight,
                    blockX + CHARGE_BAR_WIDTH * 2 + CHARGE_BAR_PAIR_GAP,
                    graphBottom);

    // Draw centered values
    myGLCD.setColor(COLOR_WHITE);
    char valStr[10];

    // Current value - centered
    sprintf(valStr, "%d", chargingAmp[i]);
    int textWidth = strlen(valStr) * CHARGE_TEXT_WIDTH;
    int centerX = blockX + (CHARGE_BAR_WIDTH - textWidth) / 2;
    myGLCD.print(valStr, centerX, graphBottom - currentHeight - CHARGE_VALUE_OFFSET);

    // Temperature value - centered
    sprintf(valStr, "%d", chargerTemp[i]);
    textWidth = strlen(valStr) * CHARGE_TEXT_WIDTH;
    centerX = blockX + CHARGE_BAR_WIDTH + CHARGE_BAR_PAIR_GAP +
              (CHARGE_BAR_WIDTH - textWidth) / 2;
    myGLCD.print(valStr, centerX, graphBottom - tempHeight - CHARGE_VALUE_OFFSET);

    // Charger label (C1, C2, etc.)
    sprintf(valStr, "C%d", i + 1);
    myGLCD.print(valStr, blockX + CHARGE_BAR_WIDTH,
                 graphBottom + CHARGE_CHARGER_LABEL_OFFSET);
  }

  // Add legend
  const int legendY = graphBottom + CHARGE_LEGEND_VERTICAL_SPACING;

  // Current legend
  myGLCD.setColor(COLOR_YELLOW);
  myGLCD.fillRect(CHARGE_LEGEND_X_OFFSET, legendY,
                  CHARGE_LEGEND_X_OFFSET + CHARGE_LEGEND_SQUARE_SIZE,
                  legendY + CHARGE_LEGEND_SQUARE_SIZE);
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.print("Charger Current", CHARGE_LEGEND_X_OFFSET + CHARGE_LEGEND_SQUARE_SIZE +
               CHARGE_CHARGER_LABEL_OFFSET, legendY + CHARGE_AXIS_TICK_OFFSET);

  // Temperature legend
  myGLCD.setColor(COLOR_SADDLE_BROWN);
  myGLCD.fillRect(CHARGE_LEGEND_X_OFFSET,
                  legendY + CHARGE_LEGEND_VERTICAL_SPACING,
                  CHARGE_LEGEND_X_OFFSET + CHARGE_LEGEND_SQUARE_SIZE,
                  legendY + CHARGE_LEGEND_VERTICAL_SPACING + CHARGE_LEGEND_SQUARE_SIZE);
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.print("Charger Temperature",
               CHARGE_LEGEND_X_OFFSET + CHARGE_LEGEND_SQUARE_SIZE + CHARGE_CHARGER_LABEL_OFFSET,
               legendY + CHARGE_LEGEND_VERTICAL_SPACING + CHARGE_AXIS_TICK_OFFSET);
}

void tempScreen() {
  // Clear screen
  myGLCD.setColor(COLOR_BLACK);
  myGLCD.fillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
 
  // Add back button in top left corner
  myGLCD.setColor(COLOR_LIGHT_BLUE);
  myGLCD.fillCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS);
  myGLCD.setColor(COLOR_CYAN);
  for (int i = 0; i < BACK_BORDER_THICKNESS; i++) {
    myGLCD.drawCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS - i);
  }
 
  // Draw back arrow
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X + 6, BACK_BUTTON_CENTER_Y);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y - 4);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y,
                  BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y + 4);
 
  // Title
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.setFont(SmallFont);
  myGLCD.setBackColor(COLOR_BLACK);
  myGLCD.print("Avg. Temp.(C) of Cells", TEXT_CENTER, 5);
 
  // Calculate statistics first to determine Y-axis scale
  int tempMin = 100, tempMax = 0, totalTemp = 0;
  for (int i = 0; i < 20; i++) {
    if (cellTemp[i] < tempMin) tempMin = cellTemp[i];
    if (cellTemp[i] > tempMax) tempMax = cellTemp[i];
    totalTemp += cellTemp[i];
  }
  int avgTemp = totalTemp / 20;
 
  // Round max temperature up to nearest 10 and add padding
  const int TEMP_MAX_VALUE = ((tempMax + 9) / 10) * 10 + 10;
  const int TEMP_MIN_VALUE = 0;
 
  // Draw graph box
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.drawRect(TEMP_GRAPH_X - 2, TEMP_GRAPH_Y - 2,
                  TEMP_GRAPH_X + TEMP_GRAPH_WIDTH + 2,
                  TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT + 2);
 
  // Draw Y-axis labels with dynamic scale
  for (int i = TEMP_MIN_VALUE; i <= TEMP_MAX_VALUE; i += (TEMP_MAX_VALUE / 5)) {
    int y = TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT -
            ((i - TEMP_MIN_VALUE) * TEMP_GRAPH_HEIGHT / (TEMP_MAX_VALUE - TEMP_MIN_VALUE));
    char buf[10];
    sprintf(buf, "%dC", i);
    myGLCD.print(buf, TEMP_GRAPH_X - TEMP_AXIS_LABEL_OFFSET, y - TEMP_LABEL_MARGIN);
    myGLCD.drawLine(TEMP_GRAPH_X - TEMP_AXIS_TICK_LENGTH, y, TEMP_GRAPH_X, y);
  }
 
  // Draw X-axis labels
  for (int i = 5; i <= 20; i += 5) {
    int x = TEMP_GRAPH_X + ((i - 1) * TEMP_GRAPH_WIDTH / 20);
    char buf[5];
    sprintf(buf, "%d", i);
    myGLCD.print(buf, x - TEMP_LABEL_MARGIN,
                 TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT + TEMP_LABEL_MARGIN);
  }
 
  // X-Axis label
  myGLCD.print("Cell Groups (Each = 3 Cells)", TEXT_CENTER,
               TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT + TEMP_BOTTOM_LABEL_OFFSET);
 
  // Draw Min/Max/Avg statistics
  char buf[30];
  sprintf(buf, "Min: %dC   Max: %dC   Avg: %dC", tempMin, tempMax, avgTemp);
  myGLCD.print(buf, TEXT_CENTER,
               TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT + TEMP_STATS_OFFSET);
 
  // Draw average temperature line
  int avgY = TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT -
             ((avgTemp - TEMP_MIN_VALUE) * TEMP_GRAPH_HEIGHT /
              (TEMP_MAX_VALUE - TEMP_MIN_VALUE));
  myGLCD.setColor(COLOR_RED);
  myGLCD.drawLine(TEMP_GRAPH_X, avgY, TEMP_GRAPH_X + TEMP_GRAPH_WIDTH, avgY);
 
  // Draw temperature bars
  for (int i = 0; i < 20; i++) {
    int temp = cellTemp[i];
    int barHeight = ((temp - TEMP_MIN_VALUE) * TEMP_GRAPH_HEIGHT) / (TEMP_MAX_VALUE - TEMP_MIN_VALUE);
   
    // Color coding based on percentage of max
    if (temp < (TEMP_MAX_VALUE * 0.4)) myGLCD.setColor(COLOR_GREEN);
    else if (temp < (TEMP_MAX_VALUE * 0.7)) myGLCD.setColor(COLOR_YELLOW);
    else myGLCD.setColor(COLOR_RED);
   
    // Draw temperature bar
    int x = TEMP_GRAPH_X + i * TEMP_BAR_WIDTH;
    myGLCD.fillRect(x, TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT - barHeight,
                    x + TEMP_BAR_WIDTH - TEMP_BAR_GAP,
                    TEMP_GRAPH_Y + TEMP_GRAPH_HEIGHT);
}
}

void deepBatScreen() {
  myGLCD.setColor(COLOR_BLACK);
  myGLCD.fillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

  // Back button
  myGLCD.setColor(COLOR_LIGHT_BLUE);
  myGLCD.fillCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS);
  myGLCD.setColor(COLOR_CYAN);
  for (int i = 0; i < BACK_BORDER_THICKNESS; i++) {
    myGLCD.drawCircle(BACK_BUTTON_CENTER_X, BACK_BUTTON_CENTER_Y, BACK_BUTTON_RADIUS - i);
  }
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y, BACK_BUTTON_CENTER_X + 6, BACK_BUTTON_CENTER_Y);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y, BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y - 4);
  myGLCD.drawLine(BACK_BUTTON_CENTER_X - 6, BACK_BUTTON_CENTER_Y, BACK_BUTTON_CENTER_X - 2, BACK_BUTTON_CENTER_Y + 4);

  // Title
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.setFont(SmallFont);
  myGLCD.print("Individual Cell Voltage", TEXT_CENTER, DEEP_BAT_TITLE_Y);

  // Fixed scale range
  const float voltageMin = 2.7;
  const float voltageMax = 3.7;

  // Calculate average voltage
  float totalVoltage = 0;
  for (int i = 0; i < DEEP_BAT_CELLS; i++) {
    totalVoltage += cellVolt[i] / DEEP_BAT_VOLTAGE_SCALE;
  }
  float averageVoltage = totalVoltage / DEEP_BAT_CELLS;

  // Draw graph box
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.drawRect(DEEP_BAT_GRAPH_X, DEEP_BAT_GRAPH_Y,
                  DEEP_BAT_GRAPH_X + DEEP_BAT_GRAPH_WIDTH,
                  DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT);

  // Y-axis scale
  float vStep = (voltageMax - voltageMin) / DEEP_BAT_Y_DIVISIONS;
  for (int i = 0; i <= DEEP_BAT_Y_DIVISIONS; i++) {
    int y = DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT - (i * DEEP_BAT_GRAPH_HEIGHT / DEEP_BAT_Y_DIVISIONS);
    float v = voltageMin + (i * vStep);

    myGLCD.drawLine(DEEP_BAT_GRAPH_X - DEEP_BAT_Y_TICK_LENGTH, y,
                    DEEP_BAT_GRAPH_X, y);

    char buf[10];
    sprintf(buf, "%.1fV", v);
    myGLCD.print(buf, DEEP_BAT_GRAPH_X - DEEP_BAT_VOLTAGE_LABEL_OFFSET, y - DEEP_BAT_Y_LABEL_OFFSET);
  }

  // X-axis cell labels
  for (int cell = 0; cell <= DEEP_BAT_CELLS; cell += DEEP_BAT_CELL_STEP) {
    int x = DEEP_BAT_GRAPH_X + (cell * DEEP_BAT_GRAPH_WIDTH / DEEP_BAT_CELLS);
    myGLCD.drawLine(x, DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT,
                    x, DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT + DEEP_BAT_X_TICK_LENGTH);
    myGLCD.printNumI(cell, x - DEEP_BAT_X_LABEL_OFFSET,
                     DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT + DEEP_BAT_X_TICK_LENGTH + DEEP_BAT_Y_LABEL_OFFSET);
  }

  // Draw average line
  float scale = DEEP_BAT_GRAPH_HEIGHT / (voltageMax - voltageMin);
  int avgY = DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT - ((averageVoltage - voltageMin) * scale);
  myGLCD.setColor(COLOR_RED);
  myGLCD.drawLine(DEEP_BAT_GRAPH_X, avgY,
                  DEEP_BAT_GRAPH_X + DEEP_BAT_GRAPH_WIDTH, avgY);

  // Plot data points
  myGLCD.setColor(COLOR_WHITE);
  int lastX = DEEP_BAT_GRAPH_X;
  float lastV = cellVolt[0] / DEEP_BAT_VOLTAGE_SCALE;
  int lastY = DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT - ((lastV - voltageMin) * scale);
  myGLCD.fillCircle(lastX, lastY, DEEP_BAT_CIRCLE_RADIUS);

  for (int i = 1; i < DEEP_BAT_CELLS; i++) {
    int x = DEEP_BAT_GRAPH_X + (i * DEEP_BAT_GRAPH_WIDTH / DEEP_BAT_CELLS);
    float v = cellVolt[i] / DEEP_BAT_VOLTAGE_SCALE;
    int y = DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT - ((v - voltageMin) * scale);

    myGLCD.drawLine(lastX, lastY, x, y);
    myGLCD.fillCircle(x, y, DEEP_BAT_CIRCLE_RADIUS);

    lastX = x;
    lastY = y;
  }

  // Bottom label
  myGLCD.setColor(COLOR_WHITE);
  myGLCD.print("Cells", TEXT_CENTER, DEEP_BAT_GRAPH_Y + DEEP_BAT_GRAPH_HEIGHT + DEEP_BAT_BOTTOM_LABEL_OFFSET);
}

