#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{

int gd=DETECT,gm,x,y,i,seedx,seedy,r;
float theta;
initgraph(&gd,&gm,"");
x=100;
y=30;
for(theta=0;theta<=360;theta+=5)
{
//circle(100,100,50);// to show boundary circle
circle(x,y,20);
x=50*cos((theta*3.142)/180)+100;//for circle put 70 intead of 50
y=70*sin((theta*3.142)/180)+100;
delay(50);
cleardevice();
}
getch();
closegraph();
}