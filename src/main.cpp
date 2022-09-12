#include <Arduino.h>

/**
 * I, Ali El Cheikh Ali, student number 000760145, certify that what I am submitting is my own work;
 * that I have not copied it from any other source. I also certify that I have not allowed my work to be copied by others
 */

unsigned long myTime;

void setup() {
  // put your setup code here, to run once:


  //start the USB serial monitor port
  Serial.begin(115200);

  //print some text to the USB port
  Serial.println("\n\nHello World!");
  Serial.println("\n\nStudent Name: Ali El Cheikh Ali\nStudent Number: 000760145");

  Serial.println("\n\nChip ID:" + String(ESP.getChipId()) + "\nFlash chip size: " + String(ESP.getFlashChipId()));
  
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(2000);
  Serial.print("Time: ");
  myTime = millis();

  Serial.println(String(myTime) + "ms");
  
}