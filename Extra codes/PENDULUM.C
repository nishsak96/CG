#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{

int gd=DETECT,gm,x,y,i,seedx,seedy,r,x1,y1;
float theta;
initgraph(&gd,&gm,"");
x=100;
y=100;
x1=100;
y1=100;

for(i=0;i<10;i++)
{
line(50,100,150,100);
for(theta=45;theta<=135;theta+=5)
{
line(50,100,150,100);
//circle(100,100,50);// to show boundary circle
circle(x,y,10);
x=50*cos((theta*3.142)/180)+100;//for circle put 70 intead of 50
y=50*sin((theta*3.142)/180)+100;
  line(100,100,x1,y1);
x1=40*cos((theta*3.142)/180)+100;//for circle put 70 intead of 50
y1=40*sin((theta*3.142)/180)+100;

delay(50);
cleardevice();

}
for(theta=135;theta>=45;theta-=5)
{
line(50,100,150,100);
circle(x,y,10);
x=50*cos((theta*3.142)/180)+100;//for circle put 70 intead of 50
y=50*sin((theta*3.142)/180)+100;
line(100,100,x1,y1);
x1=40*cos((theta*3.142)/180)+100;//for circle put 70 intead of 50
y1=40*sin((theta*3.142)/180)+100;

delay(50);
cleardevice();
}
}
getch();
closegraph();
}