long lastCm = 10;

void setup(){
  wheelSetup();
  sensorSetup();
  turnLeft();
  Serial.begin(9600); //Allows error logging
} 

void loop(){
   long cm = getDistance();
   Serial.println(cm); 
   if (cm < 10 && lastCm < 10){
      moveBackward(); 
      Serial.println("Stop moving");
   } else {
      moveForward();
   }
   lastCm = cm;

}

