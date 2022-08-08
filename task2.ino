
#include <Servo.h>

Servo myservo;
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);// attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  String data =Serial.readString();

// if it recive right gose to 180 angle
 if(data.indexOf("rigth")> -1){
    myservo.write(180);
    delay(20); 
    Serial.println(1);
    }
// if it recive left gose to 0 angle
    else if (data.indexOf("left")> -1){
    myservo.write(0);
    delay(20);
    Serial.println(2);
    }
  
}
