long lastCm = 10;
//int count = 0;
//int currentProcess = 0;

void setup(){
  wheelSetup();
  sensorSetup();
  Serial.begin(9600); //Allows error logging
  pinMode(8, OUTPUT);
} 

void loop(){
  /*
  count++;
  switch (currentProcess) {
    case 0:
      moveForward();
      if (isObjectInFrontOfUs(10)) {
        currentProcess = 11;
        count = 0;
      }
      break;
    case 1:
      turnLeft();
      if (count > 100) {
         currentProcess = 0;
      }
      break;
    case 2:
      turnRight();
      if (count > 100) {
         currentProcess = 0;
      }
      break;
    case 11:
      stopMoving();
      setTurn(true, false);
      moveSensor();
      if (count > 200) {
        if (isObjectInFrontOfUs(10)) {
          currentProcess = 12;
          count = 0;
        } else {
          currentProcess = 1;
          count = 0;          
        }          
      }
      break;
    case 12:
      stopMoving();
      setTurn(false, true);
      moveSensor();
      if (count > 200) {
        if (isObjectInFrontOfUs(10)) {
          currentProcess = 10;
          count = 0;
        } else {
          currentProcess = 2;
          count = 0;          
        }        
      }
      break;
    case 10:
      stopMoving();
      setTurn(false, false);
      moveSensor();
      if (count > 200) {
        if (isObjectInFrontOfUs(10)) {
          currentProcess = 11;
          count = 0;
        } else {
          currentProcess = 0;          
        }
      }
      break;
  }
  */
  /*
  Serial.println(count);
    moveSensor();    
  if (count < 50) {
    setTurn(false, true);
  } else if (count < 250) {
    setTurn(false, false);
  } else if (count < 450) {
    setTurn(true, false);
  } else if (count < 550) {
    setTurn(false, false);
  }
  if (count > 650) {
    count = 0;
  }
  */
    if (isObjectInFrontOfUs(10)) {
        turnLeft();
        delay(500);
    } else {
        moveForward();
    }
  /*
   long cm = getDistance();
   if (cm < 10 && lastCm < 10){
      turnLeft();
      delay(500);
      stopMoving();
   } else {
      moveForward();
   }
   lastCm = cm;
   */
}

