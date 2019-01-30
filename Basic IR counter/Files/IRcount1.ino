const int irs = 7;
const int led = 8;
int count=0;
int detect;
void setup() {
  pinMode (irs, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  detect = digitalRead (irs);
  if (detect == LOW)
  {
    count=count+1;
    Serial.println(count);
    digitalWrite (led, HIGH);
  }
  else
  {
    digitalWrite (led, LOW);
  }
  delay (1000);
}
