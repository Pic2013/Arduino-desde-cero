#define ROJO1 11
#define AMARILLO1 10
#define VERDE1 9

#define ROJO2 7
#define AMARILLO2 6
#define VERDE2 5

void setup() {
  pinMode(ROJO1, OUTPUT);
  pinMode(AMARILLO1, OUTPUT);
  pinMode(VERDE1, OUTPUT);

  pinMode(ROJO2, OUTPUT);
  pinMode(AMARILLO2, OUTPUT);
  pinMode(VERDE2, OUTPUT);

}

void loop() {
  //ESTADO 1: SEMAFORO DE AVENIDA EN VERDE Y SEMAFORO DE CALLE EN ROJO
  digitalWrite(ROJO1, HIGH);
  digitalWrite(AMARILLO1, LOW);
  digitalWrite(VERDE1, LOW);

  digitalWrite(ROJO2, LOW);
  digitalWrite(AMARILLO2, LOW);
  digitalWrite(VERDE2, HIGH);

  delay(3000);

  //ESTADO 2 : SE APAGA EL VERDE DE LA AVENIDA (PASA A ROJO) Y LA CALLE PASA A AMARILLO
  digitalWrite(ROJO1, LOW);
  digitalWrite(AMARILLO1, HIGH);
  digitalWrite(VERDE1, LOW);

  digitalWrite(ROJO2, HIGH);
  digitalWrite(AMARILLO2, LOW);
  digitalWrite(VERDE2, LOW);

  delay(1000);

  //ESTADO 3 : CALLE EN VERDE Y AVENIDA EN ROJO
  digitalWrite(ROJO1, LOW);
  digitalWrite(AMARILLO1, LOW);
  digitalWrite(VERDE1, HIGH);

  digitalWrite(ROJO2, HIGH);
  digitalWrite(AMARILLO2, LOW);
  digitalWrite(VERDE2, LOW);

  delay(1000);

  //ESTADO 4 : CALLE EN ROJO Y AVENIDA EN AMARILLO
  digitalWrite(ROJO1, HIGH);
  digitalWrite(AMARILLO1, LOW);
  digitalWrite(VERDE1, LOW);

  digitalWrite(ROJO2, LOW);
  digitalWrite(AMARILLO2, HIGH);
  digitalWrite(VERDE2, LOW);

  delay(1000);
}
