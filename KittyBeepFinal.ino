#define trigPin 7
#define echoPin 8
#define buzzerPin 13

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  float duration, distance;
  digitalWrite(trigPin, LOW);        
  delayMicroseconds(2);              
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);           
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance <= 40.00)
  {
    tone(buzzerPin, 8000);
    delay(250);
    noTone(buzzerPin); 
    delay(100);
  }
  else
 { 
  noTone(buzzerPin);
  delay(100);
  }
}
