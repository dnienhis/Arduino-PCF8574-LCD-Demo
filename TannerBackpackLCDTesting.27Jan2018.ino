/* 
 *  Arduino Test/Demo code for the LCD Backpack Module I bought yesterday
 *  at Tanner Electronics (Carrollton, TX).
 *  
 *  The Base I/O address for this module is 0x3F and is specified in the
 *  constructor example below.
 *  
 *  This code is dependent upon the Newliquidcrystal Arduino Library (the
 *  current version I downloaded/used was 1.3.5)
 *  
 *  The Newliquidcrystal library can be found here:
 *  https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
 *  
 *  Download the .zip file then do 'add Zip Library' from Arduino IDE
 *  
 *  My Yourube video of demo is here:
 *  https://youtu.be/_HHIXOOpkBI
 *  
 *  David Nienhiser
 *  Carrollton, Texas USA
 *  Amateur: W9GF
 *  Email:  david@nienhiser.com
 *  
 *  
*/

#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C  lcd(0x3f,2,1,0,4,5,6,7); // 0x27 is the I2C bus address for an unmodified backpack

#define LCD16x2 TRUE     // Comment out this line of code if using 20x4 LCD
//#define LCD20x4 TRUE   // Comment out this line of code if using 16x2 LCD

void setup()
{
  // activate LCD module
#ifdef LCD16x2 
  lcd.begin (16,2); // for 16 x 2 LCD module
#endif

#ifdef LCD20x4
  lcd.begin (20,4); // for 20 x 4 LCD module
#endif

  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.noCursor();   // lcd.cursor(); if want cursor visible
}

void loop()
{
  int counter;

#ifdef LCD16x2
  lcd.home (); // set cursor to 0,0
  lcd.clear();
  lcd.print("     Tanner"); 
  lcd.setCursor (0,1);        // go to start of 2nd line
  lcd.print("  Electronics");  
  for(counter=0;counter<5;++counter) {
    lcd.setBacklight(LOW);      // Backlight off
    delay(250);
    lcd.setBacklight(HIGH);     // Backlight on
    delay(250);
  }
  delay(1000*2);
  lcd.clear();
  lcd.home();
  lcd.print("    I2C LCD");
  lcd.setCursor(0,1);
  lcd.print("Backpack Module");
  delay(1000*5);
#endif

#ifdef LCD20x4
  lcd.home (); // set cursor to 0,0
  lcd.clear();
  lcd.print("       Tanner"); 
  lcd.setCursor (0,1);        // go to start of 2nd line
  lcd.print("    Electronics");  
  lcd.setCursor (0,2);
  lcd.print("      I2C LCD");
  lcd.setCursor(0,3);
  lcd.print("  Backpack Module");
  delay(1000*5);

  for(counter=0;counter<80;++counter) {
    lcd.scrollDisplayLeft();
    delay(250);
  }

 for(counter=0;counter<80;++counter) {
    lcd.scrollDisplayRight();
    delay(250);
  }
#endif

delay(1000*3);
}
