
int a;
int sw1_1=65;
int sw1_0=83;

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  delay (100);
}

void loop() {
  if(Serial.available()>0){
  a=Serial.read();
  Serial.println(a);
  }
  if (a==sw1_1){
    digitalWrite(8,HIGH);
    }
  if (a==sw1_0){
    digitalWrite(8,LOW);
    }
}
