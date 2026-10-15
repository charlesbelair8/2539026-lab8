// Libraries
#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Global variables

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_DC    16
#define OLED_RESET 17
#define OLED_CS    5
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &SPI, OLED_DC, OLED_RESET, OLED_CS);

// Functions

void showOnOLED(String title, String message)
{
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println(title);
  display.drawLine(0, 10, 127, 10, SSD1306_WHITE);

  display.setTextSize(2);
  display.setCursor(0, 16);
  display.println(message);

  display.display();
}

void setup()
{
  Serial.begin(115200);
  Serial.println("Program Started");

  // OLED code

  display.begin(SSD1306_SWITCHCAPVCC);
    Serial.println("OLED Started");
    showOnOLED("Lab 8: BLE", "Charles Belair");

  // BLE code
}

void loop()
{
  // Connection status
  // Messages
}
