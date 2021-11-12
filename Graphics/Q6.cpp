#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	line(100,100,200,100);
	line(100,100,100,200);
	line(200,100,200,400);
	line(200,400,100,400);
	line(100,200,75,200);
	line(75,200,75,175);
	line(100,400,100,275);
	line(100,275,75,275);
	line(75,275,75,300);
	line(75,175,0,250);
	line(75,300,0,250);
	getch();
	closegraph();
	return 0;
}
