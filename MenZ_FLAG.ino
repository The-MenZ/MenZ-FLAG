const int buttonPin = 12;
const int beepPin = 10;

int buttonState = 0;


int  melody[] = {
  500
};

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(beepPin, OUTPUT);
  digitalWrite(beepPin, LOW);
}

void loop(){
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {  // ボタンが押されている間の処理
    tone(beepPin, melody[0],100); // ブザーを鳴らす。
    delay(1000);
    noTone(beepPin);  // ブザーを止める。
    //delay(1000);
  }

}

