/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */
 
// Pin 2-8 is connected to the 7 segments of the display.

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT); 
   
  digitalWrite(D1, HIGH);  // Controls D1 / 
  digitalWrite(D2, HIGH);  // Turn 2,3rd and 4th LED off or High !
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay ( 1000);
}
void select_led ( int led_index ) {
  if ( led_index == 1) {
    digitalWrite(D1, LOW);  // Controls D1 / 
    digitalWrite(D2, HIGH);  // Turn 2,3rd and 4th LED off or High !
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
   
  }else if( led_index == 2) {
    
    digitalWrite(D1, HIGH);  
    digitalWrite(D2, LOW);  // Turn 2,3rd and 4th LED off or High !
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  
  }else if( led_index == 3) {
    
    digitalWrite(D1, HIGH);  
    digitalWrite(D2, HIGH);  // Turn 2,3rd and 4th LED off or High !
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
  
  }else if( led_index == 4) {
    digitalWrite(D1, HIGH);  
    digitalWrite(D2, HIGH);  // Turn 2,3rd and 4th LED off or High !
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW );
  
  }else if( led_index == 5) {
    digitalWrite(D1, LOW);  // This flag indicates to turn on all the LEDs.
    digitalWrite(D2, LOW);  
    digitalWrite(D3, LOW);
    digitalWrite(D4, LOW);
  }
}

// Function to print just the number 1.
void print_one ( ) {

  
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);  // 1   
  digitalWrite(pinF, HIGH);  // 1
  digitalWrite(pinG, LOW);   
  
}
void print_two( ){
  digitalWrite(pinA, HIGH);   //2
  digitalWrite(pinB, HIGH);   //2
  digitalWrite(pinC, LOW );   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW );   
  digitalWrite(pinG, HIGH);  //     

}

void print_three( ){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);  //     

}

// the loop routine runs over and over again forever:
void loop() {
  
  select_led(5);
  print_one ();
  delay(1000);      // wait for a second
  select_led(5);
  print_two();
  delay (1000);
  select_led(5);
  print_three();
  delay(1000);
  // and so on...
      
}
