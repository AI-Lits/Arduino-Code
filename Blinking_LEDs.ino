// ELECTROS Student
//C++ code

int redLED = 4;
int yellowLED = 6;
int greenLED = 8;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(yellowLED, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(yellowLED, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(greenLED, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(greenLED, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
