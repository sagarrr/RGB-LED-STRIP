
int blue=3;
int green =2;   
int brightness = 0; 
int fade = 5; 

void setup() {
  // declare pin 9 to be an output:
  pinMode(blue, OUTPUT);
  pinMode(green,OUTPUT);
}


void loop() {
  
  analogWrite(blue,255);
  
  analogWrite(green, 150);

  
  brightness = brightness + fade;

  
  if (brightness <= 0 || brightness >= 255) {
    fade = -fade;
  }
  
  delay(100000000000000000000);
}
