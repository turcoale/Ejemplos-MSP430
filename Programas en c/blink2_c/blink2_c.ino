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

 

int *P1DIR = (int *)0x0020;
int *P1OUT = (int *)0x0021;
 
 
 
int main(void) {
    
   configurar();
  
   P1OUT = 0x01; //Prendemos uno de los leds antes de entrar al bucle
   volatile unsigned int n;
  
  //Un for infinito:
  for(;;){
    P1OUT ^= 0x01;  //Invertimos el bit del puerto con XOR
    P1OUT ^= 0x40;  //Invertimos el bit del puerto con XOR
    
    //Ahora un retardo medio chapucero  
    n = 60000;
    while(n != 0){
      n = n--;  //Descontamos 1 a n  
    }  
}
  
  
return 0;
}
 
//Función para configurar el microcontrolador 
void configurar(void) {

  WDTCTL = WDTPW +WDTHOLD;  //Apagamos el Watch Dog
  P1DIR |= 0x01;            //Configuramos P1.0 como salida
  P1DIR |= 0x40;            //Configuramos P1.6 como salida
  
}
