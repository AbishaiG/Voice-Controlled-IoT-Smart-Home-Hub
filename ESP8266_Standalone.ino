

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
//#define BLYNK_TEMPLATE_ID "TMPL3lKw0euZn"
//#define BLYNK_TEMPLATE_NAME "google assistant"
#define BLYNK_AUTH_TOKEN "VeGMCeLFXcrTTUSoR08yS14VptuUzQ67"



#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "nodemcu";
char pass[] = "nodemcu";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
