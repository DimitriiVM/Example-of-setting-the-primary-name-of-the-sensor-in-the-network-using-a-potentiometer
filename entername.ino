//Задание адреса по сопративлению.
#define pincon A0
int adresnumber;

void setup() {
  // put your setup code here, to run once:
  pinMode(pincon, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
    adresnumber = analogRead(pincon)/100;
    Serial.println(adresnumber);
  delay(1000);
}
