#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm," ");
rectangle(100,100,50,50);
putpixel(60,70,RED);
getch();
return 0;
}

