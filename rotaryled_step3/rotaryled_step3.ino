#include <Adafruit_NeoPixel.h>

const int NUM_LEDS = 30;           // number of leds in strip
const int LED_PIN = 7;             // pin for led strip

const int INCREMENT = 255 / NUM_LEDS;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, Adafruit_NeoPixel::Color(i * INCREMENT, 0, 0));
    strip.show();
    delay(100);
  }
  delay(500);
  
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, Adafruit_NeoPixel::Color(0, i * INCREMENT, 0));
    strip.show();
    delay(100);
  }
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, Adafruit_NeoPixel::Color(0, 0, i * INCREMENT));
    strip.show();
    delay(100);
  }
  delay(500);
}
