#include <Keyboard.h> 
/*
 * From https://github.com/diskurse/atmega32u4-Rubberducky/
 */

// Init function
void setup()
{
  // Beginning the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(1000);

  // Open "Run Application"

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();

  delay(800);

  delay(100);
  
  // Open pastebin "you've been quacked" message
  Keyboard.print("https://pastebin.com/raw/m4kHSPJQ");

  delay(200);

  typeKey(KEY_RETURN);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
