

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "UCs0LXckVzXVsS51X5SpBPwD1bstg9SL";

char ssid[] = "Syahla108_wifi 1";
char pass[] = "gajah1000" ;

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop(){
  Blynk.run();
}
