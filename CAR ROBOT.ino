
#include <Servo.h>
void forward();
void turns();

int period = 3800;
unsigned long time_now = 0;
Servo servo1;
Servo servo2;
int turn = 500;



void setup() {
  // put your setup code here, to run once:
  servo1.attach(3);
  servo2.attach(9);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 // period = period + millis();
  forward();
  //turn = turn + millis();
  
  turns();

  //period = period + millis();
  forward();
 // turn = turn + millis();
  turns();

  //period = period + millis();
  forward();
  //turn = turn + millis();
  turns();

 // period = period + millis();
  forward();
  //turn = turn + millis();
  turns();
  
}


void forward(){
time_now = millis();
while(millis()  < period+time_now){
  servo1.write(60);
  servo2.write(180);
  delay(10);
  }
  servo1.write(90);
  servo2.write(90);
 }


void turns(){
  time_now = millis();

  while(millis() < turn+time_now){
    servo1.write(90);
    servo2.write(180);
    delay(10);
    }
    servo1.write(90);
  servo2.write(90);
}

 
