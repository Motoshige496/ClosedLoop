#define Reward 13 // to MFB
#define Record_Reward 11 //to cereplex
int inputchar;
int stop_state;
int reward_state;

void setup() {
  pinMode(Reward, OUTPUT);
  pinMode(Record_Reward, OUTPUT);
  digitalWrite(Reward, LOW);
  digitalWrite(Record_Reward, LOW);
  Serial.begin(9600);
}

void loop() {
  inputchar = Serial.read();
  if(inputchar!=-1){
    switch(inputchar){
      case 'a':
      reward_state=1;
      digitalWrite(Record_Reward, HIGH);
      for (int i=0; i <= 5; i++){
        digitalWrite(Reward, HIGH);
        delay(10);
        digitalWrite(Reward, LOW);
        delay(150);
      }
      digitalWrite(Record_Reward, LOW);
      break;
      
      case 'b':
      ; // 好きな条件分岐
      break;

      case 'c':
      ; // 好きな条件分岐
      break;

      case 'd':
      ; // 好きな条件分岐
      break;
    }
  }
}
