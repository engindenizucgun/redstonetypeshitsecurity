#define MUX_S0 D1 // Example: Control pin 0 of the multiplexer
#define MUX_S1 D2 // Example: Control pin 1 of the multiplexer
// Define other control pins as needed

#define FORCE_SENSOR_PIN A0 // The ESP8266 pin ADC0: the analog multiplexer output is connected to A0

void setup() {
  Serial.begin(9600);
  pinMode(MUX_S0, OUTPUT);
  pinMode(MUX_S1, OUTPUT);
  // Set other control pins as OUTPUT
}

void loop() {
  // Read data from FSR1
  digitalWrite(MUX_S0, LOW);
  digitalWrite(MUX_S1, LOW);
  // Set other control pins accordingly

  int analogReading1 = analogRead(FORCE_SENSOR_PIN);
  Serial.print("FSR1 Value: ");
  Serial.println(analogReading1);

  // Read data from FSR2
  digitalWrite(MUX_S0, HIGH);
  digitalWrite(MUX_S1, LOW);
  // Set other control pins accordingly

  int analogReading2 = analogRead(FORCE_SENSOR_PIN);
  Serial.print("FSR2 Value: ");
  Serial.println(analogReading2);

  delay(1000); // Adjust delay as needed
}
