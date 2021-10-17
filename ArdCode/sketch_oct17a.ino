  int Switch1 = 2;
  int LED = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(Switch1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(Switch1) == 1){
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
