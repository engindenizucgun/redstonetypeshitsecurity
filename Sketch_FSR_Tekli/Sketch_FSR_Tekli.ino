const int FSR_PIN_1 = 39; // GPIO pin connected to first FSR

// Define thresholds for each level (adjust these values as needed)
const int HIGH_THRESHOLD = 800;
const int MEDIUM_THRESHOLD = 500;
const int LOW_THRESHOLD = 200;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Read analog values from both FSR sensors
  int fsrValue1 = analogRead(FSR_PIN_1);

  // Determine level of pressure for FSR 1
  String fsr1Level;
  if (fsrValue1 >= HIGH_THRESHOLD) {
    fsr1Level = "low";
  } else if (fsrValue1 >= MEDIUM_THRESHOLD) {
    fsr1Level = "Medium";
  } else {
    fsr1Level = "high";
  }

  // Determine level of pressure for FSR 2
  // Print the sensor levels to the serial monitor
  Serial.println("FSR 1 Level: ");
  Serial.print(fsr1Level);
  // Add a delay to prevent serial output from overwhelming
  delay(500); // Adjust delay as needed
}