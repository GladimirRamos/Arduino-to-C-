/*
           ESP 32 Blink - PlatformIO                31.12.23

    Pisca repetidamente o LED da DEVKIT V1
    O led azul fico no pino D2 (GPIO 02)
*/

#include <Arduino.h>

// ----------------------------------------------------------
void ledPisca(void);                //    "função pisca"   //
// ----------------------------------------------------------

#define LED 2                       // LED_BUILTIN
 
void setup(){
 pinMode(LED, OUTPUT);
 Serial.begin(115200);
 Serial.println("Setup OK!");
 delay (2500);
}
 
void loop(){   
   Serial.println("Loop...");
   ledPisca();
   delay (500);
}

// Função pisca 
void ledPisca(void){
    digitalWrite(LED, !digitalRead(LED));               

    Serial.print("LED do pino "); Serial.print(LED);
    Serial.println(" piscou!");
}