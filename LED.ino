int r = 9; //red connected to pin 9
int g = 10; //green connected to pin 10
int b = 11; //blue connected to pin 11

void setup() {
  //declaring pins as outputs
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  colorChange(255, 0, 0); //red
  delay(1000); //one sec delay
  colorChange(255, 25, 0); //orange
  delay(1000); //one sec delay*/
  colorChange(250, 100, 0); //yellow
  delay(1000); //one sec delay
  colorChange(0, 255, 0); //green
  delay(1000); //one sec delay
  colorChange(0, 0, 255); //blue
  delay(1000); //one sec delay
  colorChange(75, 0, 170); //indigo
  delay(1000); //one sec delay
  colorChange(255, 0, 255); //purple
  delay(1000); //one sec delay
}

void colorChange(int red, int green, int blue) {
  analogWrite(r, red);
  analogWrite(g, green);
  analogWrite(b, blue);
}
