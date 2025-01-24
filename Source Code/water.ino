#define BLYNK_TEMPLATE_ID "TMPL3uMI9xR3n"
#define BLYNK_TEMPLATE_NAME "Control Pump"
#define BLYNK_AUTH_TOKEN "aMlcXXxS-fmcyStPt-viaLeXQo4fxz3m"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "aMlcXXxS-fmcyStPt-viaLeXQo4fxz3m";//Enter your Auth token
char ssid[] = "XYZ";  // Enter your Wifi Username
char pass[] = "123456"; //Enter your WIFI password

int relaypin = D4;
bool pumpState = false; // Variable to track pump state

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(relaypin, OUTPUT);
}

void loop() {
  Blynk.run();
}

// Function to turn the pump on
BLYNK_WRITE(V0) {
  int value = param.asInt(); // Get value from Blynk app
  
  if (value == 1) {
    digitalWrite(relaypin, HIGH); // Turn pump on
    pumpState = true; // Update pump state
  } else {
    digitalWrite(relaypin, LOW); // Turn pump off
    pumpState = false; // Update pump state
  }
}

// Function to report pump state to the Blynk app
BLYNK_READ(V1) {
  Blynk.virtualWrite(V1, pumpState); // Report pump state to Blynk app
}
