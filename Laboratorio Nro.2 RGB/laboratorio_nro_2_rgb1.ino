
int led1_red=    2;
int led1_green=  3;
int led1_blue=   4;
int led2_red=    5;
int led2_green=  6;
int led2_blue=   7;
int led3_red=    8;
int led3_green=  9;
int led3_blue=   10;
int inter = 11;
void setup(){

  pinMode(led1_red, OUTPUT);
  pinMode(led1_green, OUTPUT);
  pinMode(led1_blue, OUTPUT);
  pinMode(led2_red, OUTPUT);
  pinMode(led2_green, OUTPUT);
  pinMode(led2_blue, OUTPUT);
  pinMode(led3_red, OUTPUT);
  pinMode(led3_green, OUTPUT);
  pinMode(led3_blue, OUTPUT);
 
}

void loop(){
  
  if((digitalRead(inter) == true)){ 
  
    while((digitalRead(inter) == true)){
      led1_colors(0,255,0);
      led2_colors(255,0,0);
      led3_colors(255,0,0);
      delay(1000);
      led1_colors(255,0,0);
      led2_colors(0,255,0);
      led3_colors(255,0,0);
      delay(1000);
      led1_colors(255,0,0);
      led2_colors(255,0,0);
      led3_colors(0,255,0);  
      delay(1000);
      
     }
  }else if((digitalRead(inter) == false)){
      intermitente();
      
       }

}
void led1_colors(int r, int g, int b){
  analogWrite(led1_red,  r);
  analogWrite(led1_green,  g);
  analogWrite(led1_blue,  b);

}

void led2_colors(int r, int g, int b){
  analogWrite(led2_red,  r);
  analogWrite(led2_green,  g);
  analogWrite(led2_blue,  b);

}

void led3_colors(int r, int g, int b){
  analogWrite(led3_red,  r);
  analogWrite(led3_green,  g);
  analogWrite(led3_blue,  b);

}


void intermitente(){
   while((digitalRead(inter) == false)){
     
      led1_colors(255,255,0);
      led2_colors(255,255,0);
      led3_colors(255,255,0);
      delay(500);
      led1_colors(0,0,0);
      led2_colors(0,0,0);
      led3_colors(0,0,0);
      delay(500);
   }
}