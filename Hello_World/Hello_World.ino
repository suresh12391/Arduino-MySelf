
// https://www.arduino.cc/reference/en/language/functions/communication/serial/

void setup() {

  // Initiate Serial Communication
  Serial.begin(9600);
}

void loop() {

  // Print text every 5 seconds

  Serial.println(" Hello ARDUINO... ");
  delay(5000);

  Serial.println("The ARDUINO World welcomes you buddy..! ");
  delay(5000);

}
