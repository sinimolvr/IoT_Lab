// C++ code
//

int moist_Sensor=0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  moist_Sensor=analogRead(A0);
  Serial.println(moist_Sensor);
  if(moist_Sensor>=800){
    
  digitalWrite(13, HIGH);
  }
  else{
   
  digitalWrite(13, LOW);
  }
  delay(10);
  
}