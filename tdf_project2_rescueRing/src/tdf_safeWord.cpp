/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/viditb/TDF_Project2_Final/tdf_safeWord/src/tdf_safeWord.ino"
/*
 * Project tdf_safeWord
 * Description:
 * Author:
 * Date:
 */

#include <adafruit-drv2605-photon.h>

//Add Your DEVICE ID after safeWord)
void setup();
void sendHapticRequest();
void loop();
void handleHaptic(const char *event, const char *data);
#line 11 "/Users/viditb/TDF_Project2_Final/tdf_safeWord/src/tdf_safeWord.ino"
const String hapticReceive = "com.desInv202.project2.safeWord.0a10aced202194944a043b2c";
const String hapticSend= "com.desInv202.project2.safeWord.";

//CREATE UNIQUE NAME FOR YOUR DEVICE...

//Swap your device ID variable with your deviceID this is done to make sure you don't get a buzz on your own message.
String deviceID = "0a10aced202194944a043b2c";

String sara_deviceID = "0a10aced202194944a043d48";
String liam_deviceID = "0a10aced202194944a044ad0";
String eliza_deviceID = "com.eliza.photon2";
String vidit_deviceID = "0a10aced202194944a043b2c";

const int analogInPin = A0;

Adafruit_DRV2605 drv;

// Enables system threading, which allows for concurrent operation of application and system tasks.
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Particle.subscribe(hapticReceive, handleHaptic);
  
  drv.begin();
  drv.selectLibrary(1); // Use the Library 1, which includes pre-defined haptic effects
  
}

bool hasTriggered = false;

void sendHapticRequest() {
    // Publish a message to the specified message channel with the device ID
    
    String messageOut = "Trigger Safeword Haptic";
    Log.info("publishMessage: "+ messageOut);
    Particle.publish(hapticSend + sara_deviceID, messageOut);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  //If Something is working...

  const int sensorValue = analogRead(analogInPin);
  printf("Sensor Value: %d", sensorValue);

   

  if (sensorValue > 500) {
    sendHapticRequest();

        drv.setWaveform(0, 8);  // Set the effect to play.
        drv.setWaveform(1, 0);       // This is to end the waveform sequence.
        drv.go();
  }

}

// Custom handler function for handling incoming messages
void handleHaptic(const char *event, const char *data) {
    // Check if the message was published by this device
    if (event == deviceID) {
        // Message published by this device, ignore it
        return;
    } else {
      //Play Haptic...
        drv.setWaveform(0, 15);  // Set the effect to play.
        drv.setWaveform(1, 0);       // This is to end the waveform sequence.
        drv.go();
    }
}
