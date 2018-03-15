#include <avr/sleep.h>


const int pinSensor = 2;
const int pinLED = 13;
boolean encender = false;
 
void setup() {
  //configurar pin como entrada con resistencia pull-up interna
  pinMode(pinSensor, INPUT_PULLUP);
  pinMode(pinLED, OUTPUT);
}
 
void loop() {

//ciclo if donce la alarma empieza como apagada
 if (digitalRead(pinSensor)== LOW) {
    encender = true;;

//ciclo donde va a estar parpadeando en 15 iteraciones
 for (int i= 0; i<15;i ++){
      digitalWrite(pinLED, LOW);  //se apaga durante 50 milisegundos           
      delay(50);                          
      digitalWrite(pinLED, HIGH); //se enciende durante 50 milisegundos            
      delay(50);                          
    }
  //si la puerta esta cerrada se apaga elled
  } else {                                
    encender = false;                    
    digitalWrite(pinLED, LOW);
 }
  
}

  
