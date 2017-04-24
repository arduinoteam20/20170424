/*Beep + Serial Monitor 摩斯密碼控制*/
//宣告一個摩斯電碼的字元陣列，其中0代表滴，1代表搭
char *morse[]={"01","1000","1010","100",//A~D
               "0","0010","110","0000",//E~H
               "00","0111","101","0100",//I~L
               "11","10","111","0110",//M~P
               "1101","010","000","1",//Q~T
               "001","0001","11","1001",//Y~Z
               "1011","1100"};
const byte Buzzer = 10;
char chr,index;
char *ptr;

void setup() {
pinMode(Buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
  //判斷串列阜緩衝區有無資料
  if(Serial.available()){
    chr=Serial.read();
    Serial.println(chr);
    if((chr-'A')>=0 && (chr-'Z')<=0)
      index=chr-'A';
     
    
     
       ptr=morse[index];
    while(*ptr!='\0'){
      if(*ptr=='0'){
        tone(Buzzer,440,100);
        delay(100);
        }
        else{
          tone(Buzzer,440,300);
          delay(300);
         }
        ptr++;
        delay(100);
    }
    delay(300);
   }
   if(chr==' ')
    delay(700);
}  

