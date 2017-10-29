int forward = 13; //Connected to in1
int backward = 12; //Connected to in2

int forwardTwo = 2; //Connceted to in3
int backwardTwo = 4; //Connected to in4

void setup(){
	pinMode(forward, OUTPUT); //Set all above pins to output
	pinMode(backward, OUTPUT);
	pinMode(forwardTwo, OUTPUT);
	pinMode(backwardTwo, OUTPUT);
	Serial.begin(9600); //Alllows error logging
}

void loop(){
	digitalWrite(forward, HIGH); //Start spinning
	digitalWrite(backward, LOW);
	digitalWrite(forwardTwo, LOW);
	digitalWrite(backwardTwo, HIGH);
	delay(500);
	digitalWrite(forward, LOW); //Stop spinning
	digitalWrite(backward, HIGH);
	digitalWrite(forwardTwo, HIGH);
	digitalWrite(backwardTwo, LOW);
	delay(500);
}