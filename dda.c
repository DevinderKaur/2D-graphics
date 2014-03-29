#include<stdio.h>
#include<graphics.h>

int main()
{
int x1=30,y1=40,x2=300,y2=200;
int gd=DETECT,gm,k,step;
initgraph(&gd,&gm,"NULL");
setbkcolor(BLUE);
float x,y,xinc,yinc,dx,dy;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
  {
step=abs(dx);
}
 else
{
 step=abs(dy);
}
xinc=dx/step;
yinc=dy/step;
x=x1;
y=y1;
putpixel(x,y,WHITE);
for(k=1;k<=step;k++)
{
x=x+xinc;
 y=y+yinc;
putpixel(x,y,WHITE);
}
getch();
closegraph();
return 0;
}






