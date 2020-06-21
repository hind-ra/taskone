int pot=A0;
int val;

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
 
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  val=analogRead(pot);
  val=map(val,0,1023, 0,255);
  Serial.println(val);
  analogWrite(6,val);
  analogWrite(4,val);
  delay(1000); 
}
