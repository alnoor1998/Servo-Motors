#include <Servo.h>

int Position1 = 0;

Servo servo_10;
Servo servo_9;

void setup()
{
  servo_10.attach(10);
  servo_9.attach(9);

}

void loop()
{
  Position1 = 0;
  for (Position1 = 1; Position1 <= 180; Position1 += 1)
  {
    servo_10.write(Position1);
    servo_9.write(Position1);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (Position1 = 180; Position1 >= 1; Position1 -= 1)
  {
    servo_10.write(Position1);
    servo_9.write(Position1);
    delay(20); // Wait for 20 millisecond(s)
  }
    
  
}