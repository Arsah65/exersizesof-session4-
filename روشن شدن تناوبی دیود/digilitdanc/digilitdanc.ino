int l=6;
int i;
void setup() {
  // put your setup code here, to run once:
pinMode(l,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for ( i=0;i<=255;i+=1){
analogWrite(l,i);
  delay(100);

}

for (i=255;i>=0;i-=1){
analogWrite(l,i);
  delay(1000);

}
}