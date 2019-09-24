#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.https://xxxxxx.firebaseio.com/
#define FIREBASE_HOST "xxxxxxxx.firebaseio.com"
#define FIREBASE_AUTH "tokentokentokentokentoken"
#define WIFI_SSID "wifi_rede"
#define WIFI_PASSWORD "Senha do wifi"
// onde esta o led
const int pino_led = 16;

void setup() {
  Serial.begin(115200);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("conectando");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("conectado: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
  pinMode(pino_led, OUTPUT);
  int temp = 0;
}
void loop() {

  int temp;
  int sensorValue = analogRead(A0);   // Ler o pino Analógico A0 onde está o LDR
  //float voltagem = sensorValue * (3.3 / 1024.0);   // Converter a leitura analógica (que vai de 0 - 1023) para uma voltagem (0 - 3.3V), quanto de acordo com a intensidade de luz no LDR a voltagem diminui.
  float voltagem = map(sensorValue, 0, 1023, 0, 100);
  
  if (temp != voltagem) {
    Serial.println(voltagem);   // Mostrar valor da voltagem no monitor serial
    Firebase.setFloat("controle/vol", voltagem); // Envia o dado da variavel voltagem para a variavel LDR no Firebase
    if (Firebase.failed()) {
        Serial.print("setting /vol failed:");
        Serial.println(Firebase.error());  
        return;
    }
    digitalWrite(pino_led, HIGH); // acende o LED
    delay(1000); // aguarda 1 segundo
    digitalWrite(pino_led, LOW); // apaga o LED
    delay(1000); // aguarda 1 segundo
  }
  temp = voltagem;
 
  delay(10000); // Espera 5 segundos
  
}
