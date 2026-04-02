#include<reg51.h>
void delay(){
int x;
for(x=0;x<14;x++){
TH0=0;
TL0=0;
TR0=1;
while(TF0==0);
TF0=0;
TR0=0;
}
}
void timer(){
	int y;
for(y=3;y>0;y--){
P3=y;
	delay();
}
}
void main(){
TMOD=0x01;
while(1){
P2=0x02;
P1=0x54;
	timer();
P2=0x02;
P1=0xA1;
	timer();
P2=0x05;
P1=0x09;
	timer();
P2=0x08;
P1=0x4A;
	timer();
}
}