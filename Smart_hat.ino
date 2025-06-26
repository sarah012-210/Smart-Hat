// put your setup code here, to run once:
 const int LDR_PIN = A0;
const int BUZZER_PIN = 8;
const int THRESHOLD = 350; // Adjust this threshold value as needed
float distA=0; //Define Points
long duration; //Define Duration //Initialize Velocity
float distance; // Define Distance
#define trigger 9 //Define Trigger pin
#define echo 10 // Define ECHO pin
void setup() {
pinMode(LDR_PIN, INPUT);
pinMode(BUZZER_PIN, OUTPUT);
pinMode(trigger,OUTPUT); 
pinMode(echo,INPUT);
}

void loop() {
distA=ReadDistance();
  if(distA<50){
 if(distA>35){
  tone(BUZZER_PIN,500,300);
}
else if(distA>25){
  tone(BUZZER_PIN,750,300);
}
else if(distA>15){
  tone(BUZZER_PIN,1000,300);
}
else {
  tone(BUZZER_PIN,1500,300);
}
}
int sensorValue = analogRead(LDR_PIN);
 if (sensorValue > 0 && sensorValue < THRESHOLD) {
    tone(BUZZER_PIN,1500,1000);
  } 
  delay(400);
}

float ReadDistance(){ // Define Read Func.
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigger,LOW);
   duration=pulseIn(echo,HIGH);
   distance=0.034*duration/2;
   return distance;
}
