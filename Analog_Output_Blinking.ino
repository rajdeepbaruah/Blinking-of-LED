//Code Written By RAJDEEP BARUAH

//set led_pin
int led_pin = 9;

void setup() {
  //set pinMode
  pinMode(led_pin, OUTPUT);
}

void loop() {
  analogWrite(led_pin, 50);
  delay(1000);
  analogWrite(led_pin, 200);
  delay(1000);
}
