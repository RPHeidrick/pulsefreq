/*==================================================================*\
 * Water Power Cell
 * Stage 1 - CURRENT - creating the square wave
 * 
 * Author:  Richard Heidrick
 * Last Updated: 7/16/2020
 * Description: Attempt to create a simple 50% duty cycle with high
 * frequency using one digital pin (NOT PWM).
\*==================================================================*/

 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int opto = 12;
 
// the setup routine runs once when you press reset:
void setup()
{
// initialize the digital pin as an output.
pinMode(led, OUTPUT);
pinMode(opto, OUTPUT);
}
 
// the loop routine runs over and over again forever:
void loop()
{
digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(opto, HIGH);
delay(1);               // wait for a second
digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
digitalWrite(opto, LOW);
delay(1);               // wait for a second
}
