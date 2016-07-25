int Green = 8;
int Blue = 11;
int Red = 13;
int val;
int READ = 100;
int OK = 100;
int EMPTY = -1;
int DONOT = 99;

void setup() {
    pinMode(Green,OUTPUT); 
    pinMode(Blue,OUTPUT);
    pinMode(Red,OUTPUT);// declare the LED's pin as output
    Serial.begin(9600); // connect to the serial port
}

void loop () {
  
     if( READ == OK ){
          val = Serial.read();
     }
   // read the serial port

   if(val == '2'){ 
      digitalWrite(Blue,LOW);
      digitalWrite(Red,LOW);
      digitalWrite(Green,HIGH);
      READ = OK;
   }
   
   if(val == '3'){ 
      digitalWrite(Green,LOW);
      digitalWrite(Red,LOW);
      digitalWrite(Blue,HIGH);
      READ = OK;
   }

   if(val == '4'){ 
       digitalWrite(Green,LOW);
       digitalWrite(Blue,LOW);
       digitalWrite(Red,HIGH);
       READ = OK;
   }

   if(val == '5'){ 
       digitalWrite(Green,LOW);
       digitalWrite(Blue,HIGH);
       digitalWrite(Red,HIGH);
       READ = OK;
   }

   if(val == '6') { 
       digitalWrite(Blue,LOW);
       digitalWrite(Red,HIGH);
       digitalWrite(Green,HIGH);
       READ = OK;
   }

   if(val == '7'){ 
       digitalWrite(Red,LOW);
       digitalWrite(Blue,HIGH);
       digitalWrite(Green,HIGH);
       READ = OK;
   }

   if(val == '8'){
       digitalWrite(Red,HIGH);
       digitalWrite(Blue,HIGH);
       digitalWrite(Green,HIGH);
       READ=OK;
   }

   if(val == '9'){
       digitalWrite(Red,LOW);
       digitalWrite(Blue,LOW);
       digitalWrite(Green,LOW);
       READ = OK;
   }

   if( val == '1'){
      int cont = val; 
      while ( cont == val || val == -1){
         digitalWrite(Red,HIGH);
         delay(100);
         digitalWrite(Red,LOW);
         digitalWrite(Blue,HIGH);
         delay(100);
         digitalWrite(Blue,LOW);
         digitalWrite(Green,HIGH);
         delay(100);
         digitalWrite(Green,LOW);
         digitalWrite(Red,HIGH);
         digitalWrite(Blue,HIGH);
         delay(100);
         digitalWrite(Red,LOW);
         digitalWrite(Blue,LOW);
         digitalWrite(Green,HIGH);
         digitalWrite(Blue,HIGH);
         delay(100);
         digitalWrite(Green,LOW);
         digitalWrite(Blue,LOW);
         digitalWrite(Green,HIGH);
         digitalWrite(Red,HIGH);
         delay(100);
         digitalWrite(Green,LOW);
         digitalWrite(Red,LOW);
         val = Serial.read();
         if( val != -1) {
             READ = DONOT;
             break;
         }
      } 
    }
    if (val == '0'){
        int Green1;
        int Blue1;
        int Red1;
        
        if(digitalRead(Green) == HIGH){
          Green1 = Green;
        }
        if(digitalRead(Blue) == HIGH){
          Blue1 = Blue;
        }
        if(digitalRead(Red) == HIGH){
          Red1 = Red;
        }
        int cont = val;
        while(cont == val || val == -1){
          digitalWrite(Green1,HIGH);
          digitalWrite(Blue1,HIGH);
          digitalWrite(Red1,HIGH);
          delay(100);
          digitalWrite(Green1,LOW);
          digitalWrite(Blue1,LOW);
          digitalWrite(Red1,LOW);
          delay(100);
          val = Serial.read();
          if( val != -1) {
            READ = DONOT;
            break;
          }
        }
   }   
       
}


