int forward = 9; //Connected to in1
int backward = 10; //Connected to in2

int forwardTwo = 3; //Connceted to in3
int backwardTwo = 5; //Connected to in4

void setup(){
  pinMode(forward, OUTPUT); //Set all above pins to output
  pinMode(backward, OUTPUT);
  pinMode(forwardTwo, OUTPUT);
  pinMode(backwardTwo, OUTPUT);
  Serial.begin(9600); //Alllows error logging
}

void loop(){
	int inKey = Serial.read(); //Reads keyboard inputs as ascii input

	switch (inKey) { //Glorified if-statement
	    case 119: //W
	      analogWrite(forward, 255);
	      analogWrite(forwardTwo, 255);
	      analogWrite(backward, 0);
	      analogWrite(backwardTwo, 0);
	      break;
	    case 115: //S
	      analogWrite(forward, 0);
	      analogWrite(forwardTwo, 0);
	      analogWrite(backward, 255);
	      analogWrite(backwardTwo, 255);
	      break;
	    case 97: //A
	    	analogWrite(forward, 0);
	      	analogWrite(forwardTwo, 255);
	     	analogWrite(backward, 255);
	      	analogWrite(backwardTwo, 0);
	    case 100: //D (Not Working)
	    	analogWrite(forward, 0);
	      	analogWrite(forwardTwo, 255);
	     	analogWrite(backward, 0);
	      	analogWrite(backwardTwo, 255);
	    default:
	      break;
	}
}

