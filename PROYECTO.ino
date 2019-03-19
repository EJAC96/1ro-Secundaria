#include <LiquidCrystal.h> //Libreria para controlar el LCD

LiquidCrystal lcd (8,9,10,11,12,13); // (RS, E, D4, D5, D6, D7)

int menu; //Inicio de variable con nombre "menú" para guardar datos
int A=0;
int B=0;
int C=0;

//¿Qué pines vamos a usar y cómo los vamos a usar?
void setup() {//Rutina para configurar ls pines del Arduino, sólo se reproduce una vez
  
 lcd.begin(16,2); //Comando para iniciar el display LCD de 16x2
 pinMode(A0, INPUT);//Comando para configurar el pin 4 como una entrada de señal analógica
 pinMode(5,INPUT);//Comando para configurar el pin 5 como una entrada de señal digital
 pinMode(6,INPUT);//Comando para configurar el pin 6 como una entrada de señal digital
 pinMode(7,INPUT);
 lcd.cursor();//Comando para visualizar el cursor del display
 lcd.setCursor(3,0);//Comando para ubicar el cursor en la columna 3, fila 0 del LCD
 delay(3000);
 lcd.cursor();
 lcd.setCursor(6,1);//Comando para ubicar el cursor en la columna 6, fila 1 del LCD
 delay(3000);
 lcd.noCursor();//Comando para desactivar el cursor
 lcd.setCursor(0,0);
 lcd.print("TABLERO MATEMATICO");//Comando para mostrar texto en el display LCD
 lcd.setCursor(2,1);
 lcd.print("MECATRONICA");
 delay(4000);//Retado de 200 milisegundos
 lcd.clear();//Comando para borrar todo lo mostrado en el display
}

void loop() { //Rutina para escribir las instrucciones a realizar infinitamente

  //analogRead(pinAnalogico): Comando que realiza una lectura en un pin analogico del arduino 
  menu=analogRead(A0);//La variable guarda los datos del comando de lectura analogica
  //map(valor,valor inicial de voltaje,valor final de voltaje, valor bajo, valor máximo)
  menu=map(menu,0,1023,0,11);

  switch(menu){
    case 0:
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 0"); 
    delay(100);
      break;
    case 1: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 1"); 
    delay(100);
      break;
    case 2: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 2");
    delay(100); 
      break;
    case 3: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 3");
    delay(100); 
      break;
    case 4: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 4"); 
    delay(100);
      break;
    case 5: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 5");
    delay(100); 
      break;
    case 6: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 6"); 
    delay(100);
      break;
    case 7: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("caso 7"); 
    delay(100);
      break;
     
  }
}
