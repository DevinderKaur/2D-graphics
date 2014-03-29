#include<stdio.h>
#include<graphics.h>

int main()
{
int gd=DETECT,gm,k,step;
initgraph(&gd,&gm,"NULL");
line(50,50,200,300);
closegraph();
getch();
return 0;
}


