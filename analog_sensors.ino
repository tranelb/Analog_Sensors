//global variables
int pot = A3;
int ldr = A4;

int potValue, ldrValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
  Serial.println("Tranel Bland 12/28/24");
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(pot);
  ldrValue = analogRead(ldr);
  
  Serial.print("Pot = ");
  Serial.print(potValue);
  Serial.print(" LDR = ");
  Serial.println(ldrValue);

  delay(2000);
}
