const int FSR_PIN_1 = 39; // GPIO pin connected to first FSR

// Define thresholds for each level (adjust these values as needed)
const int HIGH_THRESHOLD = 800;
const int MEDIUM_THRESHOLD = 500;
const int LOW_THRESHOLD = 200;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read analog values from both FSR sensors
  int fsrValue1 = analogRead(FSR_PIN_1);

  // Determine level of pressure for FSR 1
  String fsr1Level;
  if (fsrValue1 >= HIGH_THRESHOLD) {
    fsr1Level = "High";
  } else if (fsrValue1 >= MEDIUM_THRESHOLD) {
    fsr1Level = "Medium";
  } else {
    fsr1Level = "Low";
  }

String fsr2Level;
if (fsrValue2 >= HIGH_THRESHOLD) {
  fsr2Level = "low"
}

  // Determine level of pressure for FSR 2
  // Print the sensor levels to the serial monitor
  Serial.print("FSR 1 Level: ");
  Serial.print(fsr1Level);
  Serial.print("\tFSR 2 Level: ");
  Serial.println(fsr2Level);

  // Add a delay to prevent serial output from overwhelming
  delay(100); // Adjust delay as needed
}
