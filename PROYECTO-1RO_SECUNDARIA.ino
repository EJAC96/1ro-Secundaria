#include <LiquidCrystal.h> //Libreria para controlar el LCD

LiquidCrystal lcd (8,9,10,11,12,13); // (RS, E, D4, D5, D6, D7)

//Variables
int p1=0;
int p2=0;
int p3=0;
int p4=0;
int p5=0;
int p6=0;
int p7=0;
int p8=0;
int p9=0;
int p10=0;
int x=0;

int menu;
int A=0;
int B=0;
int C=0;
int resultado=0;

void setup() {
 lcd.begin(16,2);
 pinMode(A0, INPUT);
 pinMode(4,INPUT);
 pinMode(5,INPUT);
 pinMode(6,INPUT);
 pinMode(7,INPUT);
 lcd.setCursor(0,0);
 lcd.print("TABLERO MATEMATICO");
 lcd.setCursor(2,1);
 lcd.print("EQUIPO: 1");
 delay(2000);
 lcd.clear();
}

void loop() {
  menu=analogRead(A0);
  menu=map(menu,0,1023,0,11);
  A=digitalRead(5);
  B=digitalRead(6);
  C=digitalRead(7);
  switch(menu){
    case 0:
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 1"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((A==HIGH||C==HIGH)&&x==0){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: B");
      x=1;
    }
    if(B==HIGH&&x==0){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p1=1;
      x=1;
    }
    delay(2000);
      break;
    case 1: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 2"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((B==HIGH||A==HIGH)&&x==1){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: C");
      x=2;
    }
    if(C==HIGH&&x==1){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p2=1;
      x=2;
    }
    delay(2000);
      break;
    case 2: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 3"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((C==HIGH||A==HIGH)&&x==2){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: B");
      x=3;
    }
    if(B==HIGH&&x==2){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p3=1;
      x=3;
    }
    delay(2000);
      break;
    case 3: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 4"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((C==HIGH||B==HIGH)&&x==3){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: A");
      x=4;
    }
    if(A==HIGH&&x==3){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p4=1;
      x=4;
    }
    delay(2000);
      break;
    case 4: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 5"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((C==HIGH||B==HIGH)&&x==4){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: A");
      x=5;
    }
    if(A==HIGH&&x==4){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p5=1;
      x=5;
    }
    delay(2000);
      break;
    case 5: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 6"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((A==HIGH||B==HIGH)&&x==5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: C");
      x=6;
    }
    if(C==HIGH&&x==5){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p6=1;
      x=6;
    }
    delay(2000);
      break;
    case 6: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 7"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((C==HIGH||A==HIGH)&&x==6){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: B");
      x=7;
    }
    if(B==HIGH&&x==6){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p6=1;
      x=7;
    }
    delay(2000);
      break;
    case 7: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 8"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((C==HIGH||B==HIGH)&&x==7){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: A");
      x=8;
    }
    if(A==HIGH&&x==7){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p7=1;
      x=8;
    }
    delay(2000);
      break;
     case 8: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 9"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((C==HIGH||B==HIGH)&&x==8){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: A");
      x=9;
    }
    if(A==HIGH&&x==8){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p8=1;
      x=9;
    }
    delay(2000);
      break;
     case 9: 
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("PREGUNTA 10"); 
    lcd.setCursor(0,1);
    lcd.print("Elegir respuesta");
    if((A==HIGH||B==HIGH)&&x==9){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("incorrecto :(");
      lcd.setCursor(0,1);
      lcd.print("Respuesta: C");
      x=10;
    }
    if(C==HIGH&&x==9){
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("FELICIDADES!");
      lcd.setCursor(0,1);
      lcd.print("Resp. correcta");
      p10=1;
      x=10;
    }
    delay(2000);
      break;
    case 10:
    lcd.clear();
    resultado=p1+p2+p3+p4+p5+p6+p7+p8+p9+p10;
    lcd.setCursor(2,0);
    lcd.print("RESULTADO"); 
    lcd.setCursor(5,1);
    lcd.print(resultado); 
    delay(100);
      break;
      
  }
}
