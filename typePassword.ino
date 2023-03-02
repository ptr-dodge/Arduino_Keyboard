#include "Keyboard.h"

void setup()
{
    // pin the switch is connected to
    pinMode(3, INPUT);
    // if the switch is in the 'on' position, we run the code, else it disables the code from running
    if (digitalRead(3) == HIGH)
    {
        // wait for the keyboard to start up
        Keyboard.begin();
        delay(1000);

        // trigger the delete key
        // equivalent to pressing any key on the windows lock screen
        Keyboard.press(KEY_DELETE);
        delay(100);
        // type in the password you want to use
        Keyboard.println("password_here");
        Keyboard.press(KEY_DELETE);
        delay(100);

        // press the enter key
        Keyboard.press(KEY_RETURN);
        delay(100);
        // release all the keys
        Keyboard.releaseAll();
    }
}

void loop()
{
}
