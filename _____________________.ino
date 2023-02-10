#define led_pin_2 2
#define led_pin_3 3
#define led_pin_4 4
#define led_pin_5 5

void setup()
{
  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
  pinMode(led_pin_4, OUTPUT);
  pinMode(led_pin_5, OUTPUT);
}

void first()
{
  digitalWrite(led_pin_2, LOW);
  digitalWrite(led_pin_3, HIGH);
  digitalWrite(led_pin_4, HIGH);
  digitalWrite(led_pin_5, LOW); 
}

void second()
{
  digitalWrite(led_pin_2, HIGH);
  digitalWrite(led_pin_3, LOW);
  digitalWrite(led_pin_4, HIGH);
  digitalWrite(led_pin_5, LOW);
}

void third()
{
  digitalWrite(led_pin_2, LOW);
  digitalWrite(led_pin_3, HIGH);
  digitalWrite(led_pin_4, LOW);
  digitalWrite(led_pin_5, HIGH);
}

void four()
{
  digitalWrite(led_pin_2, HIGH);
  digitalWrite(led_pin_3, LOW);
  digitalWrite(led_pin_4, LOW);
  digitalWrite(led_pin-5, HIGH);
}

void five()
{
  digitalWrite(led_pin_2, LOW);
  digitalWrite(led_pin_3, LOW);
  digitalWrite(led_pin_4, LOW);
  digitalWrite(led_pin_4, LOW); 
}

void loop()
{
  first();
  delay(1000);
  destroy();
  delay(500);

  second();
  delay(1000);
  destroy();
  delay(500);

  third();
  delay(1000);
  destroy();
  delay(500);

  four();
  delay(1000);
  destroy();
  delay(500);
  
  five();
  delay(1000);
  destroy();
  delay(500);
}
