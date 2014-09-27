#include <CapacitiveSensor.h>

CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,2);        
// 10M resistor between pins 4 & 2, pin 2 is sensor pin
// Led  pin 11 & gnd

int receivePin = 2;
int sendPin = 4;
int ledPin1 = 11;
int total=0;

void setup()                    
{

   Serial.begin(9600);
   pinMode(ledPin1, OUTPUT); 
   pinMode(ledPin2, OUTPUT);

}

void loop()                    
{
    
    long total =  cs_4_2.capacitiveSensor(30);

    Serial.print(total);
    Serial.println();
  
   if (total >250){
      digitalWrite(ledPin1, HIGH); 
   }
   else{
      digitalWrite(ledPin1, LOW); 
  }
}

  


