#define OUTPUT_PIN  3
#define INPUT_PIN   2
#define ANALOG_IN   A0
/* D2 = 32
 * D3 = 1
 * A0 = 23
 * 
*/

void setup() {
  delay(5000);
  pinMode(OUTPUT_PIN, OUTPUT);
  pinMode(5, OUTPUT);
  analogWrite(5,127);
  pinMode(INPUT_PIN,  INPUT);
//  Serial.begin(115200);
}

void loop() {
  //analogWrite(OUTPUT_PIN, analogRead(ANALOG_IN)/4 * digitalRead(INPUT_PIN));

  int delayVal = analogRead(ANALOG_IN)/4;
  digitalWrite(OUTPUT_PIN, LOW);
  delayMicroseconds(delayVal);
  digitalWrite(OUTPUT_PIN, digitalRead(INPUT_PIN));
  delayMicroseconds(256-delayVal);
//  Serial.println(delayVal);
}

/*
0     10                           255
       _____________________________
______|                             |____


*/
