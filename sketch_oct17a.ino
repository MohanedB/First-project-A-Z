int potPin=0;
int val=0;
 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(12, OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(potPin);
Serial.println(val);
delay(200);
 
if(val<512){
  digitalWrite(2, HIGH);
   digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
}
else{
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
   digitalWrite(12, LOW);
}
if(val>512){
  digitalWrite(4, HIGH);
   digitalWrite(8, HIGH);
}
else{
  digitalWrite(4, LOW);
   digitalWrite(8, LOW);
}
 
}
