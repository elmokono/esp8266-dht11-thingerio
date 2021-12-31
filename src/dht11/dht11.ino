#define THINGER_SERIAL_DEBUG
#include <ThingerESP8266.h>
#include "arduino_secrets.h"
#include <dht11.h>
#define DHT11PIN 0

dht11 DHT11;
ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

float getTemp()
{
  int chk = DHT11.read(DHT11PIN);
  return (float)DHT11.temperature;
}

void setup()
{
  // Initialize DS18B20 temperature sensors with precision set to 9
  Serial.begin(115200);
  thing.add_wifi(SSID, SSID_PASSWORD);
  thing["temperature"] >> outputValue(getTemp());
}

void loop()
{
  thing.handle();
}
