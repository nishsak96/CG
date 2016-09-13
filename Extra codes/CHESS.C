#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundaryfill(x,y,fclr,bclr)
{
if(getpixel(x,y)!=bclr&&getpixel(x,y)!=fclr)
{
 putpixel(x,y,fclr);
 boundaryfill(x+1,y,fclr,bclr);
 boundaryfill(x,y+1,fclr,bclr);
 boundaryfill(x-1,y,fclr,bclr);
 boundaryfill(x,y-1,fclr,bclr);

}
}
void main()
{

int gd=DETECT,gm,x,y,i,seedx,seedy;
initgraph(&gd,&gm,"");
for(y=50;y<130;y+=10)
{
for(x=50;x<130;x+=10)
{
rectangle(x,y,x+10,y+10) ;
}
}
  i=0;
for(seedy=55;seedy<=125;seedy+=10)
{
  i++;
for(seedx=55;seedx<=125;seedx+=10)
{
if(i%2==0)
boundaryfill(seedx,seedy,10,15);
i++;

}

}

getch();
closegraph();
}