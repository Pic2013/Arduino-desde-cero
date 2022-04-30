#define ROJO1 11
#define ROJO2 10
#define ROJO3 9
#define ROJO4 8

#define tiempo 500
#define tiempo2 250

void setup() {
  pinMode(ROJO1, OUTPUT);
  pinMode(ROJO2, OUTPUT);
  pinMode(ROJO3, OUTPUT);
  pinMode(ROJO4, OUTPUT);



}

void loop() {
  digitalWrite(ROJO1, HIGH);
  digitalWrite(ROJO4, LOW);
  delay(tiempo);

  digitalWrite(ROJO2, HIGH);
  digitalWrite(ROJO1, LOW);
  delay(tiempo);

  digitalWrite(ROJO3, HIGH);
  digitalWrite(ROJO2, LOW);
  delay(tiempo);

  digitalWrite(ROJO4, HIGH);
  digitalWrite(ROJO3, LOW);
  delay(tiempo);

  //VUELTA DEL SECUENCIADOR
  digitalWrite(ROJO4, LOW);
  digitalWrite(ROJO3, HIGH);
  delay(tiempo * 2);

  digitalWrite(ROJO3, LOW);
  digitalWrite(ROJO2, HIGH);
  delay(tiempo * 2);

  digitalWrite(ROJO2, LOW);
  digitalWrite(ROJO1, HIGH);
  delay(tiempo * 2);






}
