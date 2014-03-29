#include<graphics.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"NULL");
setbkcolor(BLUE);
outtextxy(200,200,"COMPUTER GRAPHICS");
getch();
closegraph();
}

