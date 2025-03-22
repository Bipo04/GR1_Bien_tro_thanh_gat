int sliderPin = 4;
int sliderValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sliderValue = analogRead(sliderPin);

  Serial.print("Giá trị: ");
  Serial.println(sliderValue);
  delay(200);
}