int trigPin = 11;    //Trig - green Jumper
int echoPin = 12;    //Echo - yellow Jumper
long duration, cm;

int sensorPin = A0;
int sensorValue = 0;
 
void setup() {
  	Serial.begin (9600);
  	pinMode(trigPin, OUTPUT);
  	pinMode(echoPin, INPUT);
}
 
void loop() { 
	/*
  	cm = getDistance();
	Serial.print(cm);
  	Serial.print("cm");
  	Serial.println();
	*/
	sensorValue = analogRead(sensorPin);
	Serial.println(sensorValue);
	delay(250);
}

long getDistance() {
	// The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  	// Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  	digitalWrite(trigPin, LOW);
  	delayMicroseconds(5);
  	digitalWrite(trigPin, HIGH);
  	delayMicroseconds(10);
  	digitalWrite(trigPin, LOW);
  	// Read the signal from the sensor: a HIGH pulse whose
  	// duration is the time (in microseconds) from the sending
  	// of the ping to the reception of its echo off of an object.
  	pinMode(echoPin, INPUT);
  	duration = pulseIn(echoPin, HIGH);
  	// convert the time into a distance
  	return (duration/2) / 29.1;
}