#define ROJO1 11
#define ROJO2 10
#define ROJO3 9
#define VERDE 8
#define TIEMPO 200

void setup() {
  pinMode(ROJO1, OUTPUT);
  pinMode(ROJO2, OUTPUT);
  pinMode(ROJO3, OUTPUT);
  pinMode(VERDE, OUTPUT);



}

void loop() {
  digitalWrite(ROJO1, HIGH);
  delay(TIEMPO);
  digitalWrite(ROJO2, HIGH);
  delay(TIEMPO);
  digitalWrite(ROJO3, HIGH);
  delay(TIEMPO);
  digitalWrite(VERDE, HIGH);
  delay(TIEMPO);
  digitalWrite(VERDE, LOW);
  delay(TIEMPO / 2);
  digitalWrite(ROJO3, LOW);
  delay(TIEMPO / 2);
  digitalWrite(ROJO2, LOW);
  delay(TIEMPO / 2);
  digitalWrite(ROJO1, LOW);
  delay(TIEMPO / 2);


}
