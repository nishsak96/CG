#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
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
		//cleardevice();
		px=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*110+3*pow((1-u),1)*pow(u,2)*150+pow(u,3)*200;
		py=pow((1-u),3)*150+3*pow((1-u),2)*pow(u,1)*120+3*pow((1-u),1)*pow(u,2)*90+pow(u,3)*130;
		putpixel(px,py,GREEN);
		//delay(2);
	}
	for(u=0;u<=1;u=u+0.001)
	{
		//cleardevice();
		px=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*90+3*pow((1-u),1)*pow(u,2)*50+pow(u,3)*10;
		py=pow((1-u),3)*150+3*pow((1-u),2)*pow(u,1)*120+3*pow((1-u),1)*pow(u,2)*90+pow(u,3)*130;
		putpixel(px,py,GREEN);
		//delay(2);
	}
	for(u=0;u<=1;u=u+0.001)
	{
		//cleardevice();
		px=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*130+3*pow((1-u),1)*pow(u,2)*160+pow(u,3)*150;
		py=pow((1-u),3)*150+3*pow((1-u),2)*pow(u,1)*130+3*pow((1-u),1)*pow(u,2)*170+pow(u,3)*200;
		putpixel(px,py,GREEN);
		//delay(2);
	}
		for(u=0;u<=1;u=u+0.001)
	{
		//cleardevice();
		px=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*70+3*pow((1-u),1)*pow(u,2)*40+pow(u,3)*50;
		py=pow((1-u),3)*150+3*pow((1-u),2)*pow(u,1)*130+3*pow((1-u),1)*pow(u,2)*170+pow(u,3)*200;
		putpixel(px,py,GREEN);
		//delay(2);
	}
	line(100,150,60,300);
	line(100,150,70,300);
	getch();
	closegraph();
}