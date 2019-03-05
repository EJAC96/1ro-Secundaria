#include <LiquidCrystal.h> //Libreria para controlar el LCD

LiquidCrystal lcd (8,9,10,11,12,13); // (RS, E, D4, D5, D6, D7)

void setup(){
  lcd.begin(16,2); // Inciamos el LCD 
  delay(100); //Retardo o espera de 100 milisegundos
  }

void loop(){
  //lcd.print("Texto") : Comando que sirve para mostrar texto en el LCD 
  lcd.print("  Tutorial LCD "); // LCD PRINT
  delay(3000); // Retaro o espera de 3 segundos
  lcd.clear(); // Comando para borra el texto del LCD

  lcd.setCursor(5,1); /// Comando para ubicarse en una posicion lcd.setCursor(columna, fila)
  lcd.print("MECATRÓNICA");
  lcd.setCursor(0,0); //Comando para ubicarse en una posicion lcd.setCursor(columna, fila)
  lcd.print("PROYECTO DE");
  delay(3000);
  lcd.clear(); 

  }


