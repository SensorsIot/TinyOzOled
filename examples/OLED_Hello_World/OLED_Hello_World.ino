#include <Wire.h>
#include <OzOLED.h>


void setup() {
  Serial.begin(9600);
  Serial.println("Test1");
  OzOled.init();  //initialze Oscar OLED display
  OzOled.setNormalDisplay();      //Set display to normal mode (i.e non-inverse mode)
  OzOled.setPageMode();           //Set addressing mode to Page Mode
  OzOled.printString("Hello World!"); //Print the String
  Serial.println("Test2");
}

void loop() {

  OzOled.printString("Hello World!"); //Print the String
  Serial.println("Test");

}

