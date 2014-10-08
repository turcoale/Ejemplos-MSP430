/* Amid Gabriel Ale    amidale@gmail.com, Santa Fe, Argentina

   Este código es publicado como Software Libre bajo licencia GPL.
   
   El software libre respeta 4 libertades esenciales del usuario:
   0. Libre ejecución
   1. Estudio del código fuente
   2. Libre Distribución
   3. Libre Modificación 
   
   Por otro lado fomenta el libre acceso a los conocimientos y la soberanía tecnológica
   Esto no quiere decir que renuncie a mis derechos como autor, si vas a copiar parcial o totalmente el código solo te pido que lo menciones
 
   Gracias Totales
 */ 
 
/*Ejemplo 1 Blink MSP430G2553 */

void setup()
{
  pinMode(RED_LED, OUTPUT);    //Configuramos pin del LED ROJO como salida
  pinMode(GREEN_LED, OUTPUT);  //Configuramos pin del LED VERDE como salida
}

void loop()
{
  digitalWrite(RED_LED, HIGH);   // Prendemos LED ROJO
  digitalWrite(GREEN_LED, LOW);  // Apagamos LED VERDE  
 
  delay(1000);               // Esperamos un segundo
 
  digitalWrite(RED_LED, LOW);    // Apagamos LED ROJO
  digitalWrite(GREEN_LED, HIGH); // Prendemos LED VERDE  
 
  delay(1000);               // Esperamos un segundo
}
