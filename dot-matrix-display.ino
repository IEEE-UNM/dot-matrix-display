#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4

#define CLK_PIN   13
#define DATA_PIN  11
#define CS_PIN    10

MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup(void)
{
  P.begin();
  P.setSpeed(60);
  P.setPause(0);
  P.setIntensity(0);
}

void loop(void)
{
  if (P.displayAnimate())
    P.displayText("IEEE UNM Student Branch", PA_CENTER, P.getSpeed(), P.getPause(), PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}
