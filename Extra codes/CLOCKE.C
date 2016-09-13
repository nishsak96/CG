#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{

int gd=DETECT,gm,x,y,i,seedx,seedy,r,x1,y1,x2,y2;
float theta,phi;
initgraph(&gd,&gm,"");
x=100;
y=30;
i=3;
for(phi=270;phi<=630;phi=phi+30)
{
circle(100,100,50);
outtextxy(60,100,"9");
outtextxy(140,100,"3");
outtextxy(100,140,"6");
outtextxy(100,60,"12");

line(100,100,x1,y1);
x1=30*cos((phi*3.142)/180)+100;//for circle put 70 intead of 50
y1=30*sin((phi*3.142)/180)+100;
for(theta=270;theta<=630;theta+=5)
{
outtextxy(60,100,"9");
outtextxy(140,100,"3");
outtextxy(100,140,"6");
outtextxy(100,60,"12");

circle(100,100,50);// to show boundary circle
line(100,100,x,y);
line(100,100,x1,y1);
x=40*cos((theta*3.142)/180)+100;//for circle put 70 intead of 50
y=40*sin((theta*3.142)/180)+100;
delay(50);
cleardevice();
}
delay(50);
cleardevice();
}
getch();
closegraph();
}