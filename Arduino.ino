int BOOS = 13;
int BLIJ = 12;
int SAD = 11;
int emotions = '';



void setup() {
  // put your setup code here, to run once:
  pinMode(BOOS, OUTPUT);
  pinMode(BLIJ, OUTPUT);
  pinMode(SAD, OUTPUT);
}

void indetify(int emotion){
  // 
  switch (emotion) {
  case 13:
    digitalWrite(BOOS, HIGH);
    delay(1000);
    digitalWrite(BOOS, LOW);
    delay(1500);
    break;
  case 12:
    digitalWrite(BLIJ, HIGH);
    delay(1000);
    digitalWrite(BLIJ, LOW);
    delay(1500);
    break;
    case 11:
    digitalWrite(SAD, HIGH);
    delay(1000);
    digitalWrite(SAD, LOW);
    delay(1500);
    break;
  default:
    // if nothing else matches, do the default
    // default is optional
    break;
}
}



void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(BOOS, HIGH);
delay(1000);
digitalWrite(BOOS, LOW);
delay(1500);
digitalWrite(BLIJ, HIGH);
delay(1000);
digitalWrite(BLIJ, LOW);
delay(1500);
digitalWrite(SAD, HIGH);
delay(1000);
digitalWrite(SAD, LOW);
delay(1500);
     
}
