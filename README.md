# Arduino-PCF8574-LCD-Demo
Test / Demo Code for the i2c LCD Controller 

/* 
 *  Arduino Test/Demo code for the LCD Backpack Module I bought yesterday
 *  at Tanner Electronics (Carrollton, TX).
 *  
 *  The Base I/O address for these modules is dependent upon the chip installed
 *  on the module:
 *  PCF8574AT = i2C Base I/O Address: 0x3F
 *  PCF8574T  = i2C Base I/O Address: 0x27
 *  The Base I/O address is supplied in the constructor example below.
 *  
 *  This code is dependent upon the Newliquidcrystal Arduino Library (the
 *  current version I downloaded/used was 1.3.5)
 *  
 *  The Newliquidcrystal library can be found here:
 *  https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
 *  
 *  Download the .zip file then do 'add Zip Library' from Arduino IDE
 *  
 *  My Youtube video of demo is here:
 *  https://youtu.be/_HHIXOOpkBI
 *  
 *  David Nienhiser
 *  Carrollton, Texas USA
 *  Amateur: W9GF
 *  Email:  david@nienhiser.com
 *  
 *  
*/
