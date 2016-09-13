#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
void bfill(int x,int y,int b,int w)
{
	if((getpixel(x,y)!=b)&&(getpixel(x,y)!=w))
	{
		putpixel(x,y,BLUE);
		bfill(x+1,y,b,w);
		bfill(x,y+1,b,w);
		bfill(x-1,y,b,w);
		bfill(x,y-1,b,w);
	}
}
void main()
{
	int gd=DETECT,gm;
	int x[4],y[4],j;
	float u,px,py;
	initgraph(&gd,&gm,"C:\TurboC4\TC\BGI");
	clrscr();
	/*printf("Enter the four control points:");
	for(j=0;j<4;j++)
	{
		scanf("%d %d",&x[j],&y[j]);
	}*/
	for(u=0;u<=1;u=u+0.001)
	{
		px=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*200+3*pow((1-u),1)*pow(u,2)*300+pow(u,3)*400;
		py=pow((1-u),3)*200+3*pow((1-u),2)*pow(u,1)*50+3*pow((1-u),1)*pow(u,2)*300+pow(u,3)*200;
		putpixel(px,py,WHITE);
	}
	for(u=0;u<=1;u=u+0.001)
	{
		px=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*200+3*pow((1-u),1)*pow(u,2)*300+pow(u,3)*400;
		py=pow((1-u),3)*250+3*pow((1-u),2)*pow(u,1)*400+3*pow((1-u),1)*pow(u,2)*150+pow(u,3)*250;
		putpixel(px,py,WHITE);
	}
	line(400,200,400,250);
	line(100,200,150,225);
	line(100,250,150,225);
	circle(170,180,10);
	bfill(200,225,BLUE,WHITE);
	getch();
	closegraph();
}