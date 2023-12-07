const int button = 4; // boton de encendido y apagado
const int led1 = 12; // Led verde
const int led2 = 13; // Led rojo

// Variables a cambiar
int buttonState = 0;
void setup() 
{
  // Entidades
  // put your setup code here, to run once:
  // Declarar primero entrada y salida
  pinMode(led1,OUTPUT); // Utilizaremos el pin 12 como salida
  pinMode(led2,OUTPUT); // Utilizaremos el pin 13 como salida
  pinMode(button,INPUT);// Utilizaremos el pin 11 como entrada CON RESISTENCIAS INTERNAS
  }
 void loop() {
        // put your main code here, to run repeatedly:
     buttonState = digitalRead(button);
     if(buttonState == HIGH)
         {
          digitalWrite(led1,HIGH); // Encendemos el led verde
            digitalWrite(led2,LOW); // Apagamos el led arojo
            delay(1000);
            digitalWrite(led1,LOW); // Apagamos el led verde
            digitalWrite(led2,HIGH); // Encendemos el led arojo
            delay(1000);
           }
      
      else{ 
            digitalWrite(led1,LOW);
           digitalWrite(led2,LOW);
            }
         }

          
