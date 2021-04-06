/*
 * Hello, welcome project with four traffic lights!!!
 * This is code of project, was create in 06/04/21.
 * 
 * by Guilherme Pedroso de Lima
 */


const int red1 = 2;     //declaration of variable red1, that receives the value of pin 2
const int yellow1 = 3;  //declaration of variable yellow1, that receives the value of pin 3
const int green1 = 4;   //declaration of variable green1, that receives the value of pin 4
const int red2 = 5;     //declaration of variable red2, that receives the value of pin 5
const int yellow2 = 6;  //declaration of variable yellow2, that receives the value of pin 6
const int green2 =7;    //declaration of variable green2, that receives the value of pin 7
const int red3 = 8;     //declaration of variable red3, that receives the value of pin 8
const int yellow3 = 9;  //declaration of variable yellow3, that receives the value of pin 9
const int green3 = 10;  //declaration of variable green3, that receives the value of pin 10
const int red4 = 11;    //declaration of variable red4, that receives the value of pin 11
const int yellow4 = 12; //declaration of variable yellow4, that receives the value of pin 12
const int green4 = 13;  //declaration of variable green4, that receives the value of pin 13


void setup() { 
  pinMode(red1, OUTPUT);    // pin number and using the output
  pinMode(yellow1, OUTPUT); // pin 3 and using the output
  pinMode(green1, OUTPUT);  // pin 4 and using the output
  pinMode(red2, OUTPUT);    // pin 5 and using the output
  pinMode(yellow2, OUTPUT); // pin 6 and using the output
  pinMode(green2, OUTPUT);  // pin 7 and using the output
  pinMode(red3, OUTPUT);    // pin 8 and using the output
  pinMode(yellow3, OUTPUT); // pin 9 and using the output
  pinMode(green3, OUTPUT);  // pin 10 and using the output
  pinMode(red4, OUTPUT);    // pin 11 and using the output
  pinMode(yellow4, OUTPUT); // pin 12 and using the output
  pinMode(red4, OUTPUT);    // pin 13 and using the output
}

void loop() {

  digitalWrite(red1, HIGH);  // initializes the first red LED
  digitalWrite(red2, HIGH);  // initializes the second red LED
  digitalWrite(red3, HIGH);  // initializes the third red LED 
  digitalWrite(red4, HIGH);  // initializes the fourth red LED
  
  digitalWrite(red1, LOW);     // turn off the LED red
  digitalWrite(green1, HIGH);  // lights up green LED
  delay(4000);                 // waits 4 seconds
  digitalWrite(green1, LOW);   // turn off the LED green
  digitalWrite(yellow1, HIGH); // lights up yellow LED 
  delay(1500);                 // waits 3/2 seconds
  digitalWrite(yellow1, LOW);  // turn off the LED yellow
  digitalWrite(red1, HIGH);    // lights up red LED
  
  digitalWrite(red2, LOW);     // turn off the LED red
  digitalWrite(green2, HIGH);  // lights up green LED
  delay(4000);                 // waits 4 seconds
  digitalWrite(green2, LOW);   // turn off the LED green
  digitalWrite(yellow2, HIGH); // lights up yellow LED
  delay(1500);                 // waits 3/2 seconds
  digitalWrite(yellow2, LOW);  // turn off the LED yellow
  digitalWrite(green2, HIGH);  // lights up red LED
  
  digitalWrite(red3, LOW);     // turn off the LED red
  digitalWrite(green3, HIGH);  // lights up green LED
  delay(4000);                 // waits 4 seconds
  digitalWrite(green3, LOW);   // turn off the LED green
  digitalWrite(yellow3, HIGH); // lights up yellow LED
  delay(1500);                 // waits 3/2 seconds
  digitalWrite(yellow3, LOW);  // turn off the LED yellow
  digitalWrite(red3, HIGH);    // lights up red LED
  
  digitalWrite(red4, LOW);     // turn off the LED red
  digitalWrite(green4, HIGH);  // lights up green LED
  delay(4000);                 // waits 4 seconds
  digitalWrite(green4, LOW);   // turn off the LED green
  digitalWrite(yellow4, HIGH); // lights up yellow LED
  delay(1500);                 // waits 3/2 seconds
  digitalWrite(yellow4, LOW);  // turn off the LED yellow
  digitalWrite(red4, HIGH);    // lights up red LED
  
}
