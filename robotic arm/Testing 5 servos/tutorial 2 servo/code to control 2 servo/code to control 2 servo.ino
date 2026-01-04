String x;
String S_N;
String val;
int angle;
void setup() {
  Serial.begin(9600);
}
void getdata(){
  S_N = x.substring(0,2);
  val = x.substring(3);
  angle = val.toInt();
  //Serial.println("The servo is:");
  //Serial.println(S_N);
  //Serial.println("The angle is :");
  //Serial.println(val);
}
void loop() {
  if (Serial.available()>0){
    x = Serial.readString();
    //Serial.println(x);
    getdata();
    if (S_N == "S1"){
      Serial.println("The servo 1 is rotating at an angle of :");
      Serial.println(angle);
      //pca.setPWM(0, 0, angle);
    }
    else if (S_N == "S2"){
      Serial.println("The servo 2 is rotating at an angle of :");
      Serial.println(angle);
      //pca.setPWM(1, 0, angle);
    }
    
  }
  
}
