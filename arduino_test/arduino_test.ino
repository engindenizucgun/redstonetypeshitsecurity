void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  Serial.println("Hello from Arduino Nano!"); // Send a message over serial
  delay(1000); // Wait for 1 second before sending the next message
}
