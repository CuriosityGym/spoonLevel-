int motorA_pin1 = 4; 
int motorA_pin2 = 5; 
int motorA_pin3 = 6; 
int motorA_pin4 = 7; 

int motorB_pin1 = 11; 
int motorB_pin2 = 10; 
int motorB_pin3 = 9; 
int motorB_pin4 = 8; 
int _step = 0; 
//boolean dir = false;// false=clockwise, true=counter clockwise
int count=0;
void setup() 
{ 
 pinMode(motorA_pin1, OUTPUT);  
 pinMode(motorA_pin2, OUTPUT);  
 pinMode(motorA_pin3, OUTPUT);  
 pinMode(motorA_pin4, OUTPUT);  
 
 Serial.begin(9600);
} 
 void loop() 
{
  //Serial.println("Fwd");
for(int j=0; j<2; j+= 1){
   // Serial.println(j);
for(int i=0; i<8;i+=1){
 _step = i;     
 switch(_step){ 
  //Serial.println(_step);
   case 0: 
     digitalWrite(motorA_pin1, LOW);
    // digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
    // digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
    // digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, HIGH);
    // digitalWrite(motorB_pin4, HIGH); 
   break;  
   case 1: 
     digitalWrite(motorA_pin1, LOW);
    // digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
    // digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, HIGH);
    // digitalWrite(motorB_pin3, HIGH); 
     digitalWrite(motorA_pin4, HIGH);
    // digitalWrite(motorB_pin4, HIGH); 
   break;  
   case 2: 
     digitalWrite(motorA_pin1, LOW);
    // digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
    // digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, HIGH);
     //digitalWrite(motorB_pin3, HIGH); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 3: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, HIGH);
     //digitalWrite(motorB_pin2, HIGH); 
     digitalWrite(motorA_pin3, HIGH);
     //digitalWrite(motorB_pin3, HIGH); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 4: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, HIGH);
     //digitalWrite(motorB_pin2, HIGH); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 5: 
     digitalWrite(motorA_pin1, HIGH);
     //digitalWrite(motorB_pin1, HIGH);  
     digitalWrite(motorA_pin2, HIGH);
     //digitalWrite(motorB_pin2, HIGH); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
     case 6: 
     digitalWrite(motorA_pin1, HIGH);
     //digitalWrite(motorB_pin1, HIGH);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 7: 
     digitalWrite(motorA_pin1, HIGH);
     //digitalWrite(motorB_pin1, HIGH);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, HIGH);
     //digitalWrite(motorB_pin4, HIGH); 
   break;  
   default: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
 }

 delay(10);
 //delayMicroseconds(500); 
}
}
delay(500);

//Serial.println("Backwd");
for(int j=0; j<2; j+=1){
 // Serial.println(j);  
for(int i=7; i>=0;--i){
 _step = i;     
 switch(_step){ 
   case 0: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, HIGH);
     //digitalWrite(motorB_pin4, HIGH); 
   break;  
   case 1: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, HIGH);
     //digitalWrite(motorB_pin3, HIGH); 
     digitalWrite(motorA_pin4, HIGH);
     //digitalWrite(motorB_pin4, HIGH); 
   break;  
   case 2: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, HIGH);
     //digitalWrite(motorB_pin3, HIGH); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 3: 
     digitalWrite(motorA_pin1, LOW);
    // digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, HIGH);
    // digitalWrite(motorB_pin2, HIGH); 
     digitalWrite(motorA_pin3, HIGH);
    // digitalWrite(motorB_pin3, HIGH); 
     digitalWrite(motorA_pin4, LOW);
    // digitalWrite(motorB_pin4, LOW); 
   break;  
   case 4: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, HIGH);
     //digitalWrite(motorB_pin2, HIGH); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 5: 
     digitalWrite(motorA_pin1, HIGH);
     //digitalWrite(motorB_pin1, HIGH);  
     digitalWrite(motorA_pin2, HIGH);
     //digitalWrite(motorB_pin2, HIGH); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
     case 6: 
     digitalWrite(motorA_pin1, HIGH);
     //digitalWrite(motorB_pin1, HIGH);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
   case 7: 
     digitalWrite(motorA_pin1, HIGH);
     //digitalWrite(motorB_pin1, HIGH);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, HIGH);
     //digitalWrite(motorB_pin4, HIGH); 
   break;  
   default: 
     digitalWrite(motorA_pin1, LOW);
     //digitalWrite(motorB_pin1, LOW);  
     digitalWrite(motorA_pin2, LOW);
     //digitalWrite(motorB_pin2, LOW); 
     digitalWrite(motorA_pin3, LOW);
     //digitalWrite(motorB_pin3, LOW); 
     digitalWrite(motorA_pin4, LOW);
     //digitalWrite(motorB_pin4, LOW); 
   break;  
 }

 delay(10); 
}
}
delay(2000);
}
