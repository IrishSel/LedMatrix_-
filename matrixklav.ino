#define ledPin_1 5
#define ledPin_2 6
#define ledPin_3 7
#define ledPin_4 8

void setup() {
  Serial.begin(9600);
  pinMode(ledPin_1, INPUT);
  pinMode(ledPin_2, INPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(ledPin_4, OUTPUT);
}

int val_1;
int val_2;
int val_3;
int val_4;
String result;

void loop() {
  val_1 = 0;
  val_2 = 0;
  val_3 = 0;
  val_4 = 0;
  result = "";
  pinMode(ledPin_4, INPUT);
  pinMode(ledPin_3, OUTPUT);
  digitalWrite(ledPin_3, HIGH);
  if (digitalRead(ledPin_1) == 1 && digitalRead(ledPin_2) == 0)
  {
    result = " 1 button";
    val_1 = 1;
  }
  if (digitalRead(ledPin_2) == 1 && digitalRead(ledPin_1) == 0)
  {
    result = " 2 button";
    val_2 = 1;
  }
  if (digitalRead(ledPin_2) == 1 && digitalRead(ledPin_1) == 1)
  {
    result = " 1, 2 buttons";
  }
  digitalWrite(ledPin_3, LOW);
  pinMode(ledPin_3, INPUT);
  pinMode(ledPin_4, OUTPUT);
  digitalWrite(ledPin_4, HIGH);
  if (digitalRead(ledPin_1) == 1 && digitalRead(ledPin_2) == 0)
  {
    result = " 3 button";
    val_3 = 1;
  }
  if (digitalRead(ledPin_2) == 1 && digitalRead(ledPin_1) == 0)
  {
    result = " 4 button";
    val_4 = 1;
  }
  if (digitalRead(ledPin_2) == 1 && digitalRead(ledPin_1) == 1)
  {
    result = " 3, 4 buttons";
  }
  if (val_1 == 1 && val_2 == 0 && val_3 == 1 && val_4 == 0)
  {
    result = " 1, 3 buttons";
  }
  if (val_1 == 1 && val_2 == 0 && val_3 == 0 && val_4 == 1)
  {
    result = " 1, 4 buttons";
  }
  if (val_1 == 0 && val_2 == 1 && val_3 == 1 && val_4 == 0)
  {
    result = " 2, 3 buttons";
  }
  if (val_1 == 0 && val_2 == 1 && val_3 == 0 && val_4 == 1)
  {
    result = " 2, 4 buttons";
  }
  if (val_1 == 1 && val_2 == 1 && val_3 == 1 && val_4 == 0)
  {
    result = " 1, 2, 3 buttons";
  }
  if (val_1 == 1 && val_2 == 1 && val_3 == 0 && val_4 == 1)
  {
    result = " 1, 2, 4 buttons";
  }
  if (val_1 == 1 && val_2 == 0 && val_3 == 1 && val_4 == 1)
  {
    result = " 1, 3, 4 buttons";
  }
  if (val_1 == 0 && val_2 == 1 && val_3 == 1 && val_4 == 1)
  {
    result = " 2, 3, 4 buttons";
  }
  if (val_1 == 1 && val_2 == 1 && val_3 == 1 && val_4 == 1)
  {
    result = " 1, 2, 3, 4 buttons";
  }
  if (val_1 == 1 || val_2 == 1 || val_3 == 1 || val_4 == 1){
    Serial.println(result);
  }
  digitalWrite(ledPin_4, LOW);
  delay(500);
}
