
#include"writing.h"

const double delayTime =1; //these value may change acc. to the length of the word in the POV display
const double charBreak =1; //these value may change acc. to the length of the word in the POV display


int brillo = 25;    
    
String textString="robo tech ";
// seconds , minutes , seconds 
int seconds = 0;
int minutes =28;
int hours=5;
int hora=5;
///////////////////

int sep =2550;   

// sensor
int sensor=13;
//for writing word
int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 2;
//for drawing clock
int LED1c = 7;
int LED2c = 8;
int LED3c = 9;
int LED4c = 10;
int LED5c = 11;
int LED6c = 12;

// hour & minuite
int LED1h = 1;
int LED2h = A1;
int LED3h = A2;
int LED4h = A3;
int LED5h = A4;
int LED6h = A5; //center




void displayLine(int line){
int myline;
myline = line;
if (myline>=16) {digitalWrite(LED1, HIGH); myline-=16;} else {digitalWrite(LED1, LOW);}
if (myline>=8)  {digitalWrite(LED2, HIGH); myline-=8;}  else {digitalWrite(LED2, LOW);}
if (myline>=4)  {digitalWrite(LED3, HIGH); myline-=4;}  else {digitalWrite(LED3, LOW);}
if (myline>=2)  {digitalWrite(LED4, HIGH); myline-=2;}  else {digitalWrite(LED4, LOW);}
if (myline>=1)  {digitalWrite(LED5, HIGH); myline-=1;}  else {digitalWrite(LED5, LOW);}
}
// for clock 
void displayLinec(int line){
int myline;
myline = line;
if (myline>=16) {digitalWrite(LED1c, HIGH); myline-=16;} else {digitalWrite(LED1c, LOW);}
if (myline>=8)  {digitalWrite(LED2c, HIGH); myline-=8;}  else {digitalWrite(LED2c, LOW);}
if (myline>=4)  {digitalWrite(LED3c, HIGH); myline-=4;}  else {digitalWrite(LED3c, LOW);}
if (myline>=2)  {digitalWrite(LED4c, HIGH); myline-=2;}  else {digitalWrite(LED4c, LOW);}
if (myline>=1)  {digitalWrite(LED5c, HIGH); myline-=1;}  else {digitalWrite(LED5c, LOW);}
}


void displayChar(char ch){
if (ch == 'a'){for (int i = 4; i >=0; i--){displayLine(a[i]);delay(delayTime);}displayLine(0);}
if (ch == 'b'){for (int i = 4; i >=0; i--){displayLine(b[i]);delay(delayTime);}displayLine(0);}
if (ch == 'c'){for (int i = 4; i >=0; i--){displayLine(c[i]);delay(delayTime);}displayLine(0);}
if (ch == 'd'){for (int i = 4; i >=0; i--){displayLine(d[i]);delay(delayTime);}displayLine(0);}
if (ch == 'e'){for (int i = 4; i >=0; i--){displayLine(e[i]);delay(delayTime);}displayLine(0);}
if (ch == 'f'){for (int i = 4; i >=0; i--){displayLine(f[i]);delay(delayTime);}displayLine(0);}
if (ch == 'g'){for (int i = 4; i >=0; i--){displayLine(g[i]);delay(delayTime);}displayLine(0);}
if (ch == 'h'){for (int i = 4; i >=0; i--){displayLine(h[i]);delay(delayTime);}displayLine(0);}
if (ch == 'i'){for (int it= 4; it>=0;it--){displayLine(i[it]);delay(delayTime);}displayLine(0);}
if (ch == 'j'){for (int i = 4; i >=0; i--){displayLine(j[i]);delay(delayTime);}displayLine(0);}
if (ch == 'k'){for (int i = 4; i >=0; i--){displayLine(k[i]);delay(delayTime);}displayLine(0);}
if (ch == 'l'){for (int i = 4; i >=0; i--){displayLine(l[i]);delay(delayTime);}displayLine(0);}
if (ch == 'm'){for (int i = 4; i >=0; i--){displayLine(m[i]);delay(delayTime);}displayLine(0);}
if (ch == 'n'){for (int i = 4; i >=0; i--){displayLine(n[i]);delay(delayTime);}displayLine(0);}
if (ch == 'o'){for (int i = 4; i >=0; i--){displayLine(o[i]);delay(delayTime);}displayLine(0);}
if (ch == 'p'){for (int i = 4; i >=0; i--){displayLine(p[i]);delay(delayTime);}displayLine(0);}
if (ch == 'q'){for (int i = 4; i >=0; i--){displayLine(q[i]);delay(delayTime);}displayLine(0);}
if (ch == 'r'){for (int i = 4; i >=0; i--){displayLine(r[i]);delay(delayTime);}displayLine(0);}
if (ch == 's'){for (int i = 4; i >=0; i--){displayLine(s[i]);delay(delayTime);}displayLine(0);}
if (ch == 't'){for (int i = 4; i >=0; i--){displayLine(t[i]);delay(delayTime);}displayLine(0);}
if (ch == 'u'){for (int i = 4; i >=0; i--){displayLine(u[i]);delay(delayTime);}displayLine(0);}
if (ch == 'v'){for (int i = 4; i >=0; i--){displayLine(v[i]);delay(delayTime);}displayLine(0);}
if (ch == 'w'){for (int i = 4; i >=0; i--){displayLine(w[i]);delay(delayTime);}displayLine(0);}
if (ch == 'x'){for (int i = 4; i >=0; i--){displayLine(x[i]);delay(delayTime);}displayLine(0);}
if (ch == 'y'){for (int i = 4; i >=0; i--){displayLine(y[i]);delay(delayTime);}displayLine(0);}
if (ch == 'z'){for (int i = 4; i >=0; i--){displayLine(z[i]);delay(delayTime);}displayLine(0);}
if (ch == '!'){for (int i = 4; i >=0; i--){displayLine(excl[i]);delay(delayTime);}displayLine(0);}
if (ch == '?'){for (int i = 4; i >=0; i--){displayLine(ques[i]);delay(delayTime);}displayLine(0);}
if (ch == '.'){for (int i = 4; i >=0; i--){displayLine(eos[i]);delay(delayTime);}displayLine(0);}
if (ch == ':'){for (int i = 4; i >=0; i--){displayLine(semicolon[i]);delay(delayTime);}displayLine(0);}

if (ch == '0'){for (int i = 4; i >=0; i--){displayLine(_0[i]);delay(delayTime);}displayLine(0);}
if (ch == '1'){for (int i = 4; i >=0; i--){displayLine(_1[i]);delay(delayTime);}displayLine(0);}
if (ch == '2'){for (int i = 4; i >=0; i--){displayLine(_2[i]);delay(delayTime);}displayLine(0);}
if (ch == '3'){for (int i = 4; i >=0; i--){displayLine(_3[i]);delay(delayTime);}displayLine(0);}
if (ch == '4'){for (int i = 4; i >=0; i--){displayLine(_4[i]);delay(delayTime);}displayLine(0);}
if (ch == '5'){for (int i = 4; i >=0; i--){displayLine(_5[i]);delay(delayTime);}displayLine(0);}
if (ch == '6'){for (int i = 4; i >=0; i--){displayLine(_6[i]);delay(delayTime);}displayLine(0);}
if (ch == '7'){for (int i = 4; i >=0; i--){displayLine(_7[i]);delay(delayTime);}displayLine(0);}
if (ch == '8'){for (int it= 4; it>=0;it--){displayLine(_8[it]);delay(delayTime);}displayLine(0);}
if (ch == '9'){for (int i = 4; i >=0; i--){displayLine(_9[i]);delay(delayTime);}displayLine(0);}

delay(charBreak);

}


void setup(){
  for(int i=1;i<=12;i++){
    pinMode(i, OUTPUT);
  }
  hora=hora*5;

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(sensor,INPUT);
 
  
}




int State = 0;
int lastState = 0;

long previousMillis = 0;
long currentMillis = 0;


void incrementTime(){
    if(seconds ==60 ){
       seconds = 0;
       minutes++;
    }
    if(minutes ==60 ){
       minutes = 0;
       hours++;
       hora+=5;
    }
    if(hours ==24 ){          
        hours = 0;
    }
    if(hora == 60){          
        hora = 0;
    }
}

void hand(){

           for(int i=0;i<=59;i++){
              if ( seconds == i) {  
               digitalWrite( LED1h,HIGH);
               delayMicroseconds(brillo);
               digitalWrite( LED1h,LOW);
              }
             if (minutes == i) {  
              digitalWrite( LED2h,HIGH);
              digitalWrite( LED3h,HIGH);
              digitalWrite( LED4h,HIGH);
              digitalWrite( LED5h,HIGH);
              digitalWrite( LED6h,HIGH);
               delayMicroseconds(brillo);
                digitalWrite( LED2h,LOW);
              digitalWrite( LED3h,LOW);
              digitalWrite( LED4h,LOW);
              digitalWrite( LED5h,LOW);
              digitalWrite( LED6h,LOW); }
            if (hora==i){   
               digitalWrite( LED3h,HIGH);
              digitalWrite( LED4h,HIGH);
              digitalWrite( LED5h,HIGH);
              digitalWrite( LED6h,HIGH);
              delayMicroseconds(brillo); 
                digitalWrite( LED3h,LOW);
              digitalWrite( LED4h,LOW);
              digitalWrite( LED5h,LOW);
              digitalWrite( LED6h,LOW);}
              
                       // display num 12
                       
            
                
                  else if(i == 0){ 
                   
                displayLinec(num12[3]);
                delayMicroseconds(2000);
                displayLinec(num12[4]);
                delayMicroseconds(550);
                }
                 else if(i == 1){ 
                 
                delayMicroseconds(1450);
                displayLinec(num12[5]);
                delayMicroseconds(1100);
                
                } 
                    else if(i == 2){ 
                      delayMicroseconds(900);
                      displayLinec(0);
                      delayMicroseconds(1650);
                }
                         //display num 3
                else if(i == 13){ 
                delayMicroseconds(100);
                displayLinec(num3[0]);
                delayMicroseconds(2000);
                displayLinec(num3[1]);
                delayMicroseconds(450);
                }
                  else if(i == 14){ 
                delayMicroseconds(1550);
                displayLinec(num3[2]);
                delayMicroseconds(1000);
                }
                   else if(i == 15){ 
                delayMicroseconds(1000);
                displayLinec(num3[3]);
                delayMicroseconds(1550);
                }
                    else if(i == 16){ 
               delayMicroseconds(450);
                displayLinec(num3[4]);
                delayMicroseconds(2000);
                displayLinec(0);
                delayMicroseconds(100);
                }
                           //display num 6

                    else if(i == 28){ 
                delayMicroseconds(100);
                displayLinec(num6[0]);
                delayMicroseconds(2000);
                displayLinec(num6[1]);
                delayMicroseconds(450);
                }
                  else if(i == 29){ 
                delayMicroseconds(1550);
                displayLinec(num6[2]);
                delayMicroseconds(1000);
                }
                   else if(i == 30){ 
                delayMicroseconds(1000);
                displayLinec(num6[3]);
                delayMicroseconds(1550);
                }
                    else if(i == 31){ 
                delayMicroseconds(450);
                displayLinec(num6[4]);
                delayMicroseconds(2000);
                displayLinec(0);
                delayMicroseconds(100);
                }
                            //display num 9

                    else if(i == 43){ 
                delayMicroseconds(100);
                displayLinec(num9[0]);
                delayMicroseconds(2000);
                displayLinec(num9[1]);
                delayMicroseconds(450);
                }
                  else if(i == 44){ 
                delayMicroseconds(1550);
                displayLinec(num9[2]);
                delayMicroseconds(1000);
                }
                   else if(i == 45){ 
                delayMicroseconds(1000);
                displayLinec(num9[3]);
                delayMicroseconds(1550);
                }
                    else if(i == 46){ 
                delayMicroseconds(450);
                displayLinec(num9[4]);
                delayMicroseconds(2000);
                displayLinec(0);
                delayMicroseconds(100);
                }
                   //outside any if
                else {  
                //displayLinec(0);
               delayMicroseconds(sep);
                }
  }
}


  String fixZero(int i){
  String ret;
  if(i < 10) ret += "0";
  ret += i;
  return ret;
}


void loop()
{
  digitalWrite(12,HIGH);
    currentMillis = millis();

             if(currentMillis - previousMillis >= 1000){
             previousMillis = currentMillis;
             seconds = seconds + 1;
             }
      
   incrementTime();

   String timeString = String(fixZero(hours))+":"+String(fixZero(minutes))+":"+String(fixZero(seconds));
  String s = textString+" "+timeString;


   State = digitalRead(sensor); //get the sensor state
   if(State != lastState){//if sensor state changed
      if(State == HIGH){//if sensor state is high

                 

                displayLinec(num12[0]);
                delayMicroseconds(2000);
               
                displayLinec(num12[1]);
                delayMicroseconds(2000);

               
                displayLinec(num12[2]);
                delayMicroseconds(2000);
              
            hand();
            
            
            delayMicroseconds(35); 
        
                //writes the message
             for (int i=s.length()-1; i>=0; i--){
                     displayChar(s[i]);
              }
              
           
        }
        lastState = State;
            
    }
    
}
  



