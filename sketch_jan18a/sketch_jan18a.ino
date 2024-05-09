#include "ESP32WebServer.h"
#include "ESP32CameraWebServer.h"

const char *ssid = "your-ssid";
const char *password = "your-password";

ESP32WebServer server(80);

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  if (!setupCamera()) {
    Serial.println("Error setting up camera");
    while (1);
  }

  server.begin();
  Serial.println("Server started");
}

void loop() {
  server.handleClient();  
}
