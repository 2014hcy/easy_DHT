#include "easy_DHT.h"
#include "DHT.h"

#define DHTPIN      14
#define DHTTYPE  DHT11
#define OLED_ADDR 0x3C

void setup() {
  init_DHT(DHTPIN, DHTTYPE, OLED_ADDR);
}

void loop() {
  write_data();
}