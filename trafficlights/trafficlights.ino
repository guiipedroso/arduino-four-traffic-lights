/*
 * Hello, welcome project with four traffic lights!!!
 * This is code of project, was create in 06/04/21.
 * 
 * by Guilherme Pedroso de Lima
 */


const int red1 = 2;     //declaration of variable red1, that receives the value of pin 2
const int yellow1 = 3;  //declaration of variable yellow1, that receives the value of pin 3
const int green1 = 4;   //declaration of variable green1, that receives the value of pin 4
const int red2 = 5;     
const int yellow2 = 6;    
const int green2 =7;    
const int red3 = 8;     
const int yellow3 = 9;  
const int green3 = 10;
const int red4 = 11;     
const int yellow4 = 12; 
const int green4 = 13;  


void setup() { 
  // pin number and using the output
  pinMode(red1, OUTPUT);    // example: pin 2 and using the output
  pinMode(yellow1, OUTPUT); 
  pinMode(green1, OUTPUT);  
  pinMode(red2, OUTPUT);    
  pinMode(yellow2, OUTPUT); 
  pinMode(green2, OUTPUT);  
  pinMode(red3, OUTPUT);    
  pinMode(yellow3, OUTPUT); 
  pinMode(green3, OUTPUT);  
  pinMode(red4, OUTPUT);   
  pinMode(yellow4, OUTPUT); 
  pinMode(red4, OUTPUT);    
}

void loop() {

  digitalWrite(red1, HIGH);  // initializes the first red LED
  digitalWrite(red2, HIGH);  // initializes the second red LED
  digitalWrite(red3, HIGH);  
  digitalWrite(red4, HIGH);  
  
  digitalWrite(red1, LOW);     // turn off the LED red
  digitalWrite(green1, HIGH);  // lights up green LED
  delay(4000);                 // waits 4 seconds
  digitalWrite(green1, LOW);   // turn off the LED green
  digitalWrite(yellow1, HIGH); // lights up yellow LED 
  delay(1500);                 // waits 3/2 seconds
  digitalWrite(yellow1, LOW);  // turn off the LED yellow
  digitalWrite(red1, HIGH);    // lights up red LED
  
  digitalWrite(red2, LOW);     
  digitalWrite(green2, HIGH);  
  delay(4000);                 
  digitalWrite(green2, LOW);   
  digitalWrite(yellow2, HIGH); 
  delay(1500);                 
  digitalWrite(yellow2, LOW);  
  digitalWrite(green2, HIGH);  
  
  digitalWrite(red3, LOW);     
  digitalWrite(green3, HIGH);  
  delay(4000);                 
  digitalWrite(green3, LOW);   
  digitalWrite(yellow3, HIGH); 
  delay(1500);                 
  digitalWrite(yellow3, LOW); 
  digitalWrite(red3, HIGH);    
  
  digitalWrite(red4, LOW);     
  digitalWrite(green4, HIGH);  
  delay(4000);                 
  digitalWrite(green4, LOW);   
  digitalWrite(yellow4, HIGH); 
  delay(1500);                 
  digitalWrite(yellow4, LOW); 
  digitalWrite(red4, HIGH);    
  
}
