// Incluimos la biblioteca Servo para controlar los servomotores
Servo servo1;
Servo servo2;

// Variables para almacenar la posición de los servomotores
int eje1 = 90;
int eje2 = 90;

// Configuración inicial al iniciar el programa
void setup() {
  // Asignamos los pines a los que están conectados los servomotores
  servo1.attach(7);
  servo2.attach(6);

  // Posicionamos ambos servomotores en 90 grados al inicio
  servo1.write(90);
  servo2.write(90);
}

// Bucle principal que se ejecuta continuamente
void loop() {
  // Control del SERVO 1

  // Si la lectura analógica del pin A0 es menor que 200 y la posición actual es menor que 180
  if (analogRead(0) < 200 && eje1 < 180) {
    // Incrementamos la posición y movemos el servo1 a la nueva posición
    eje1++;
    servo1.write(eje1);
  }

  // Si la lectura analógica del pin A0 es mayor que 700 y la posición actual es mayor que 0
  if (analogRead(0) > 700 && eje1 > 0) {
    // Decrementamos la posición y movemos el servo1 a la nueva posición
    eje1--;
    servo1.write(eje1);
  }

  // Control del SERVO 2

  // Si la lectura analógica del pin A1 es menor que 200 y la posición actual es menor que 180
  if (analogRead(1) < 200 && eje2 < 180) {
    // Incrementamos la posición y movemos el servo2 a la nueva posición
    eje2++;
    servo2.write(eje2);
  }

  // Si la lectura analógica del pin A1 es mayor que 700 y la posición actual es mayor que 0
  if (analogRead(1) > 700 && eje2 > 0) {
    // Decrementamos la posición y movemos el servo2 a la nueva posición
    eje2--;
    servo2.write(eje2);
  }

  // Introducimos un retraso de 15 milisegundos para evitar movimientos bruscos
  delay(15);
}
