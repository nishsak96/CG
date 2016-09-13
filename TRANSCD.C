#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd,gm,c,ang,t,tx,ty,Sx,Sy,x1,y1,x2,y2,x3,y3,nx1,nx2,nx3,ny1,ny2,ny3;
float f=3.14;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
clrscr();
printf("enter the values for x1,y1,x2,y2,x3,y3:");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
do
{
printf("\n1.Translation\n2.Rotation\n3.Scaling\nEnter choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("\nEnter tx and ty:");
scanf("%d%d",&tx,&ty);
nx1=x1+tx;
nx2=x2+tx;
nx3=x3+tx;
ny1=y1+ty;
ny2=y2+ty;
ny3=y3+ty;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
getch();
case 2:
printf("\nEnter the angle:");
scanf("%d",&ang);
t=3.14*(ang/180);
nx1=abs(x1*cos(t)-y1*sin(t));
nx2=abs(x2*cos(t)-y2*sin(t));
nx3=abs(x3*cos(t)-y3*sin(t));
ny1=abs(x1*sin(t)+y1*cos(t));
ny2=abs(x2*sin(t)+y2*cos(t));
ny3=abs(x3*sin(t)+y3*cos(t));
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
getch();
case 3:
printf("\nEnter Sx and Sy:");
scanf("%d%d",&Sx,&Sy);
nx1=x1*Sx;
nx2=x2*Sx;
nx3=x3*Sx;
ny1=y1*Sy;
ny2=y2*Sy;
ny3=y3*Sy;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
getch();
}
}while(c!=4);
getch();
}

