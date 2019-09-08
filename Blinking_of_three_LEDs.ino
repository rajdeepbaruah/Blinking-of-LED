//Code Written By RAJDEEP BARUAH

//set led_pin
int led_pin1 = 10,led_pin2 = 13,led_pin3=8;

void setup() {
  //set pinMode
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
}

void loop() {
  digitalWrite(led_pin1, HIGH);
  delay(250);
  digitalWrite(led_pin1, LOW);
  delay(100);
  digitalWrite(led_pin2, HIGH);
  delay(250);
  digitalWrite(led_pin2, LOW);
  delay(100);
  digitalWrite(led_pin1, HIGH);
  delay(250);
  digitalWrite(led_pin1, LOW);
  delay(100);
  digitalWrite(led_pin3, HIGH);
  delay(250);
  digitalWrite(led_pin3, LOW);
  delay(100);
}
