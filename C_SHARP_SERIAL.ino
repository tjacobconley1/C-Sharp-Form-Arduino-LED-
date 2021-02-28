

String serialData;

void setup(){

  Serial.begin(9600);
  Serial.setTimeout(10);
    pinMode(LED_BUILTIN, OUTPUT);
    
}

void loop(){}




void serialEvent(){
  serialData = Serial.readString();

  if(serialData == "O"){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  }
  else if(serialData == "I"){
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  }
  else{
    Serial.println("INCORRECT ENTRY");
  }
  
  
}


int parseDataX(String data){
  
  data.remove(data.indexOf("T"));
  return data.toInt();  
}
