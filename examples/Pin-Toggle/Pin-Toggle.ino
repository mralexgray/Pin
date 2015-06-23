/**
  @file Pin-Toggle.ino
  @author Alec Fenichel
  @brief Pin toggling example
  @details Quickly toggling a pin between high and low
*/

#include <Pin.h>  // Include Pin library

Pin myPin = Pin(5);  // Create Pin object for digital pin labelled 5 on any of the supported boards

/**
  Called at start
 */
void setup() {
  myPin.setOutput();  // Set Pin to output mode
  myPin.setHigh();  // Set Pin to output high
}

/**
  Called continously after setup
 */
void loop() {
  myPin.toggleState();  // Set Pin to output the opposite of the previous output
  delay(2);  // Wait 2 milliseconds
}
