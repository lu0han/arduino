/**************************************************************
 * Blynk is a platform with iOS and Android apps to control
 * Arduino, Raspberry Pi and the likes over the Internet.
 * You can easily build graphic interfaces for all your
 * projects by simply dragging and dropping widgets.
 *
 *   Downloads, docs, tutorials: http://www.blynk.cc
 *   Blynk community:            http://community.blynk.cc
 *   Social networks:            http://www.fb.com/blynkapp
 *                               http://twitter.com/blynk_app
 *
 * Blynk library is licensed under MIT license
 * This example code is in public domain.
 *
 **************************************************************
 *
 * This example shows how to use Microduino/mCookie Bluetooth LE
 * to connect your project to Blynk.
 *
 * NOTE: BLE support is in beta!
 *
 **************************************************************/

// For CoreUSB, use Serial for debug output
#define BLYNK_PRINT Serial
//#define BLYNK_USE_DIRECT_CONNECT
#include <BlynkSimpleSerialBLE.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YourAuthToken";

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Blynk will work through Serial1
  Serial1.begin(9600);
  Blynk.begin(auth, Serial1);
}

void loop()
{
  Blynk.run();
}

