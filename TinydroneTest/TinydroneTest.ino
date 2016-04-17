#define Motor_0 3
#define Motor_1 6
#define Motor_2 9
#define Motor_3 10
 
void setup() {
  pinMode(Motor_0, OUTPUT);
  pinMode(Motor_1, OUTPUT);
  pinMode(Motor_2, OUTPUT);
  pinMode(Motor_3, OUTPUT);
  Serial.begin(9600);
}

// Start Motors with given speed
void startmotor(int s0, int s1, int s2, int s3) {
  analogWrite(Motor_0, s0);
  analogWrite(Motor_1, s1);
  analogWrite(Motor_2, s2);
  analogWrite(Motor_3, s3);
}
  


void loop() {
  int a = 250;
  int Motor_0_Speed = a; 
  int Motor_1_Speed = a;
  int Motor_2_Speed = a;
  int Motor_3_Speed = a;
  startmotor(Motor_0_Speed,Motor_1_Speed,Motor_2_Speed,Motor_3_Speed);
}

