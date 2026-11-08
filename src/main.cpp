#include <WiFi.h>

// put function declarations here:
int myFunction(int, int);

const char* SSID = "ACCESSPOINT";
const char* PASSWORD = "123456";

void setup() {
  // put your setup code here, to run once:
  Serial.println("Launching AP");
  WiFi.softAP(SSID, PASSWORD);

  return;
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}