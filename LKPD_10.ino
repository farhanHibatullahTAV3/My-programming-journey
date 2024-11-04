const int buttonPin = 26
void setup(){
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  int buttonState = digitalRead(button pin);
  Serial.print("Tombol di tekan: ");
  if (buttonState == HIGH){
    Serial.println("ya");
  } else {
    Serial.println("tidak");
    delay(100);
  }
