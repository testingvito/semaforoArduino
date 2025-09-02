// Definir los pines para cada LED
#define LED_ROJO 13
#define LED_AMARILLO 12
#define LED_VERDE 11

void setup() {
  // Configurar los pines como salidas
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  // Estado inicial: Semáforo en rojo
  digitalWrite(LED_ROJO, HIGH);    // Enciende el LED rojo
  delay(5000);                      // Espera 5 segundos

  // Transición a verde
  digitalWrite(LED_ROJO, LOW);     // Apaga el LED rojo
  digitalWrite(LED_VERDE, HIGH);   // Enciende el LED verde
  delay(5000);                      // Espera 5 segundos

  // Transición a amarillo
  digitalWrite(LED_VERDE, LOW);    // Apaga el LED verde
  digitalWrite(LED_AMARILLO, HIGH);  // Enciende el LED amarillo
  delay(2000);                      // Espera 2 segundos

  // Transición de vuelta a rojo
  digitalWrite(LED_AMARILLO, LOW); // Apaga el LED amarillo
  digitalWrite(LED_ROJO, HIGH);    // Enciende el LED rojo
  delay(1000);                      // Espera 1 segundo para la transición

}

No soy un programador de Arduino, pero puedo proporcionarte el código que necesitas para un semáforo. El código es un ejemplo básico que enciende y apaga las luces de un semáforo en una secuencia predeterminada: rojo, amarillo y verde.

Requisitos de Hardware
Para que este código funcione, necesitarás los siguientes componentes:

1 x Placa Arduino (modelo UNO o similar).

3 x LEDs (uno rojo, uno amarillo y uno verde).

3 x Resistencias de 220Ω.

Cables de conexión.

1 x Protoboard.

El circuito debe conectar el cátodo (la pata corta) de cada LED a una resistencia de 220Ω, y la otra pata de la resistencia al pin GND de la placa Arduino. Los ánodos (las patas largas) de los LEDs deben conectarse a los siguientes pines digitales:

LED Rojo: Pin 13

LED Amarillo: Pin 12

LED Verde: Pin 11

Código para Arduino
A continuación, se presenta el código que debes copiar y pegar en el IDE de Arduino. El código utiliza las funciones pinMode() para configurar los pines y digitalWrite() y delay() para controlar la secuencia de encendido y apagado de los LEDs.

C++

// Definir los pines para cada LED
#define LED_ROJO 13
#define LED_AMARILLO 12
#define LED_VERDE 11

void setup() {
  // Configurar los pines como salidas
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  // Estado inicial: Semáforo en rojo
  digitalWrite(LED_ROJO, HIGH);    // Enciende el LED rojo
  delay(5000);                      // Espera 5 segundos

  // Transición a verde
  digitalWrite(LED_ROJO, LOW);     // Apaga el LED rojo
  digitalWrite(LED_VERDE, HIGH);   // Enciende el LED verde
  delay(5000);                      // Espera 5 segundos

  // Transición a amarillo
  digitalWrite(LED_VERDE, LOW);    // Apaga el LED verde
  digitalWrite(LED_AMARILLO, HIGH);  // Enciende el LED amarillo
  delay(2000);                      // Espera 2 segundos

  // Transición de vuelta a rojo
  digitalWrite(LED_AMARILLO, LOW); // Apaga el LED amarillo
  digitalWrite(LED_ROJO, HIGH);    // Enciende el LED rojo
  delay(1000);                      // Espera 1 segundo para la transición

}
Cómo funciona el código
#define: Al inicio, se usan directivas #define para dar nombres claros a los pines, lo que hace el código más fácil de leer. Por ejemplo, en lugar de usar el número 13, usamos LED_ROJO.

void setup(): Esta función se ejecuta solo una vez al inicio. Aquí, la función pinMode() configura los pines 11, 12 y 13 como OUTPUT, lo que significa que se usarán para enviar energía a los LEDs.

void loop(): Esta función se ejecuta repetidamente en un ciclo infinito.

digitalWrite(pin, HIGH) enciende un LED, enviando 5V al pin.

digitalWrite(pin, LOW) apaga el LED, enviando 0V.

delay(milisegundos) detiene el programa por el número de milisegundos especificado, lo que controla cuánto tiempo permanece encendido cada luz.

Para usar este código, simplemente abre el IDE de Arduino, pega el código, conecta tu placa Arduino a la computadora y haz clic en el botón de "Subir" (la flecha hacia la derecha). ¡El semáforo debería comenzar a funcionar!
