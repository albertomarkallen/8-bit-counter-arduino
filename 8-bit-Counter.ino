int arr[] = {0,0,0,0,0,0,0,0};
int lightArr[] = {6,7,8,9,10,11,12,13};

void setup() {
  Serial.begin(9600);
  for(int i = 13 ; i>=6 ; i--){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  int counter = 7;
  for(int i = 0 ; i <= 256 ; i++){
    toBinary(i,counter);
    Serial.print(i);
    for(int i = 0 ; i < 8 ; i++){
      if(arr[i]==1){
        digitalWrite(lightArr[i],HIGH);
      }
      else{
        digitalWrite(lightArr[i],LOW);
      }
    }
    Serial.println(" ");
    delay(1000);
  }
}


void toBinary(int num,int counter){
  while(num > 0){
    arr[counter] = num % 2;
    num /= 2;
    counter--;
  }
}