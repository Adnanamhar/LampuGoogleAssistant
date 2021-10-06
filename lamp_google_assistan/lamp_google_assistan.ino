#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> /* untuk modul wifi */
#include <BlynkSimpleEsp8266.h> /* file untuk blynk */


char auth[] = "8p9S_efXdrc-pwpTMd0IOUaK3eqdRO3c"; /* token yang dikirim dari blynk ke email masing2 */
char ssid[] = "iPhone yoiii";
char pass[] = "santuy237";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);

}

void loop() {
  // put your main code here, to run repeatedly
  Blynk.run();
}
