# Flash ESP8266 with Nano

1) Flash src/nano-basic/nano-basic.ino to nano

2) Flash src/dht11/dht1.ino file to ESP8266 using nano with following wiring

* nano 3.3v - esp8266 vcc
* nano gnd - esp8266 gnd
* nano rx - esp8266 rx
* nano tx - esp8266 tx
* nano gnd - esp8266 pin0 (only when flashing)

3) standalone run

* esp8266 vcc - 3v
* esp8266 gnd - gnd
* dht11 signal - esp8266 pin0
* dht11 vcc - 3v
* dht11 gnd - gnd

# Use 2xAA batteries (3v)