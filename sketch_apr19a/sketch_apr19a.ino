#define BLYNK_TEMPLATE_ID "TMPL3k6xnlb-s"
#define BLYNK_TEMPLATE_NAME "control electric bulb"
#define BLYNK_AUTH_TOKEN "x1O3Oot5EcYTBQA8i6ViDFxowaecZNQd"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h> 
 
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "TP-Link_D752";  // type your wifi name
char pass[] = "19620510";  // type your wifi password

int relaypin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(relaypin,OUTPUT);
 
  }

void loop()
{
  Blynk.run(); 
 }
