#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"NULL");
int f,fe,fne,x1,x2,y1,y2,dy,dx,m;
printf"_____";
printf"\n BY MCA";
printf"\n_____";
printf"\n Enter the coords \n";
readf>>x1>>y1>>x2>>y2;
dy=y2-y1;
dx=x2-x1;
f=(2*dy)-dx;
while(x1<=x2)
{
if(f<=0)
{
x1=x1+1;
//y1=y1;
f=2*dy;
putpixel(x1,y1,WHITE);
f=f+fe;
}
else
{
y1=y1+1;
x1=x1+1;
f=(2*dy)-(2*dx);
putpixel(x1,y1,WHITE);
f=f+fne;
}
}
getch();
closegraph();
}

