int trigPin = 11;    //Trig
int echoPin = 12;    //Echo

int sensorPin = A0;
int sensorValue = 0;

bool left = false;
bool right = false;

bool getLeft() {
  return left;
}

bool getRight() {
  return right;
}

bool setTurn(bool l, bool r) {
  left = l;
  right = r;
}
 
void sensorSetup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

boolean canTurnLeft() {
    return true; 
}

boolean canTurnRight() {
    return true;
}

void moveSensor() {
  if (left) {
    moveSensorLeft();
  } else if (right) {
    moveSensorRight();
  } else {
    moveSensorStraightOn();
  }
}

void moveSensorLeft() {
  digitalWrite(8, HIGH);
  delayMicroseconds(500);
  digitalWrite(8, LOW);
  delayMicroseconds(17500);
}

void moveSensorRight() {
  digitalWrite(8, HIGH);
  delayMicroseconds(2500);
  digitalWrite(8, LOW);
  delayMicroseconds(15500);
}

void moveSensorStraightOn() {
  digitalWrite(8, HIGH);
  delayMicroseconds(1500);
  digitalWrite(8, LOW);
  delayMicroseconds(16500);
}

boolean isObjectInFrontOfUs(int distance) {
    long trial1 = getDistance();
    long trial2 = getDistance();
    if (trial1 > distance && trial2 > distance) {
        return false;
    } else if (trial1 < distance && trial2 < distance) {
        return true;
    } else {
        return isObjectInFrontOfUs(distance);
    }
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
    long dist = pulseIn(echoPin, HIGH);
    // convert the time into a distance
    return (dist/2) / 29.1;
}

