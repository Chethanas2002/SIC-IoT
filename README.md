**Water Level Monitoring System**

       **Description**
        This project is designed to monitor water levels in a tank and control a water pump using an ESP8266 microcontroller. It utilizes an ultrasonic sensor for 
        water level measurement, an LCD display for local feedback, and Blynk for IoT-based monitoring and control.

**Features**
Real-time water level monitoring using an ultrasonic sensor.
Visual representation of water levels using LEDs and an LCD display.
IoT integration with Blynk for remote monitoring and pump control.
Automatic and manual pump control.
Alerts for critical water levels.


**Hardware Requirements:**
ESP8266 microcontroller (e.g., NodeMCU)
Ultrasonic sensor (e.g., HC-SR04)
LCD display with I2C module
LEDs (5)
Relay module
Water pump
Jumper wires
Breadboard or PCB
Wi-Fi network


**Software Requirements**
Arduino IDE
Blynk app (for iOS/Android)
ESP8266 board package (installed in Arduino IDE)



**Setup Instructions**
      **1.Blynk Setup:**
          Create a new project in the Blynk app.
          Add required widgets (e.g., buttons and value displays).
          Note down the Blynk Auth Token.


      **2.Hardware Connections:**
          Connect the ultrasonic sensor's Trig and Echo pins to the ESP8266.
          Connect the LEDs to the appropriate pins on the ESP8266.
          Connect the relay to the pump and ESP8266.
          Follow the pin mapping defined in the code.


      **3.Code Upload:**
          Install necessary libraries in Arduino IDE:
          LiquidCrystal_I2C
          BlynkSimpleEsp8266
          Replace placeholders in the code with your Wi-Fi credentials and Blynk Auth Token.
          Upload the code to the ESP8266.


      **4.Power the System:**
          Supply power to the ESP8266 and connected components.


**Usage**
Launch the Blynk app and connect to the project.
The LCD will display the current water level, while the LEDs provide a quick visual indication.
Use the Blynk app to monitor the water level and manually control the pump.
