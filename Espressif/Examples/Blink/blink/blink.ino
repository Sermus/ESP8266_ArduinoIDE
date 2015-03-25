#define LED_PIN 2 // GPIO2

bool state = true;

void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	digitalWrite(LED_PIN, state);
	state = !state;
  delay(1000);
}