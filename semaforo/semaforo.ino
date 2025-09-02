#define LED_ROJO 13
#define LED_AMARILLO 12
#define LED_VERDE 11

void setup() {
 
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  
  digitalWrite(LED_ROJO, HIGH); 
  delay(5000);                      

  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  delay(5000);

  
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH); 
  delay(2000);                     


  digitalWrite(LED_AMARILLO, LOW); 
  digitalWrite(LED_ROJO, HIGH);
  delay(1000);                  
}