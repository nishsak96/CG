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
		cleardevice();
		px=pow((1-u),3)*50+3*pow((1-u),2)*pow(u,1)*100+3*pow((1-u),1)*pow(u,2)*120+pow(u,3)*120;
		py=pow((1-u),3)*100+3*pow((1-u),2)*pow(u,1)*120+3*pow((1-u),1)*pow(u,2)*150+pow(u,3)*170;
		circle(px,py,10);
		delay(2);
	}
	for(u=0;u<=1;u=u+0.001)
	{
		cleardevice();
		px=pow((1-u),3)*120+3*pow((1-u),2)*pow(u,1)*150+3*pow((1-u),1)*pow(u,2)*185+pow(u,3)*200;
		py=pow((1-u),3)*170+3*pow((1-u),2)*pow(u,1)*110+3*pow((1-u),1)*pow(u,2)*110+pow(u,3)*170;
		circle(px,py,10);
		delay(2);
	}
	for(u=0;u<=1;u=u+0.001)
	{
		cleardevice();
		px=pow((1-u),3)*200+3*pow((1-u),2)*pow(u,1)*220+3*pow((1-u),1)*pow(u,2)*250+pow(u,3)*270;
		py=pow((1-u),3)*170+3*pow((1-u),2)*pow(u,1)*150+3*pow((1-u),1)*pow(u,2)*150+pow(u,3)*170;
		circle(px,py,10);
		delay(4);
	}
	getch();
	closegraph();
}