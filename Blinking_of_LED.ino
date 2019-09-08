//Code Written By RAJDEEP BARUAH

//set led_pin
int led_pin1 = 9,led_pin2 = 13;

void setup() {
  //set pinMode
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
}

void loop() {
  digitalWrite(led_pin1, HIGH);
  delay(500);
  digitalWrite(led_pin1, LOW);
  delay(250);
  digitalWrite(led_pin2, HIGH);
  delay(250);
  digitalWrite(led_pin2, LOW);
  delay(150);
  digitalWrite(led_pin1, HIGH);
  delay(100);
  digitalWrite(led_pin1, LOW);
  delay(50);
  digitalWrite(led_pin2, HIGH);
  delay(50);
  digitalWrite(led_pin2, LOW);
  delay(20);
}
