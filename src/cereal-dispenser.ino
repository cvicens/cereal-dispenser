/*
 * Project cereal-dispenser
 * Description:
 * Author:
 * Date:
 */

int led1 = D7;

// setup() runs once, when the device is first turned on.
void setup() {
    pinMode(led1, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  // To blink the LED, first we'll turn it on...
  digitalWrite(led1, HIGH);

  // We'll leave it on for 1 second...
  delay(1000);

  // Then we'll turn it off...
  digitalWrite(led1, LOW);

  // Wait 1 second...
  delay(1000);
}