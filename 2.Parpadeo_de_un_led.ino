#define LED 8
#define TIEMPO 500


void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(TIEMPO);
  digitalWrite(LED, LOW);
  delay(TIEMPO);
}
