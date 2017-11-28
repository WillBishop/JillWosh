int forward = 10; //Connected to in1
int backward = 9; //Connected to in2

int forwardTwo = 5; //Connceted to in3
int backwardTwo = 3; //Connected to in4

void wheelSetup(){
  pinMode(forward, OUTPUT); //Set all above pins to output
  pinMode(backward, OUTPUT);
  pinMode(forwardTwo, OUTPUT);
  pinMode(backwardTwo, OUTPUT);
}

void turnRight(){
  analogWrite(forward, 0);
  analogWrite(forwardTwo, 255);
  analogWrite(backward, 255);
  analogWrite(backwardTwo, 0);
}
void turnLeft(){
  analogWrite(forward, 0);
  analogWrite(forwardTwo, 255);
  analogWrite(backward, 255);
  analogWrite(backwardTwo, 0);
}
void moveBackward(){
  analogWrite(forward, 255);
  analogWrite(forwardTwo, 255);
  analogWrite(backward, 0);
  analogWrite(backwardTwo, 0);
}
void moveForward(){
  analogWrite(forward, 0);
  analogWrite(forwardTwo, 0);
  analogWrite(backward, 255);
  analogWrite(backwardTwo, 255);
}
void stopMoving(){
  analogWrite(forward, 0);
  analogWrite(forwardTwo, 0);
  analogWrite(backward, 0);
  analogWrite(backwardTwo, 0);
}



