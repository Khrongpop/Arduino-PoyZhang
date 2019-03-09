void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int minitouch = digitalRead(5);
// int s1 = digitalRead(4);
// int s2 = digitalRead(2);
// int s3 = digitalRead(3);
// int rose = digitalRead(10);
 
    
//  Serial.println(String(minitouch) + "," + String(s1) + "," + String(s2) + "," + String(s3) + "," + String(rose));
//  Serial.println(String(s1) + "," + String(s2) + "," + String(s3));
Serial.println (String(minitouch) );
  delay(50);


}
