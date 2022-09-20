#include <MD_MAX72xx.h>
#include <MD_Parola.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3

MD_Parola display(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  display.begin();
  display.setIntensity(0);
  display.displayClear();
  display.displayScroll("IEEE UNM", PA_CENTER, PA_SCROLL_LEFT, 100);
}

void loop() {
  if (display.displayAnimate()) {
    display.displayReset();
  }
}
