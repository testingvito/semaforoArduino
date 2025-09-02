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
