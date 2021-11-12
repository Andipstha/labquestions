#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	line(100,100,400,100);
	line(100,100,100,150);
	line(400,100,400,150);
	line(100,150,50,150);
	line(400,150,50,150);
	line(50,150,50,250);
	line(450,150,450,250);
	line(50,250,100,250);
	line(450,250,400,250);
	line(100,250,100,300);
	line(400,250,400,300);
	line(100,300,400,300);
	getch();
	closegraph();
	return 0;
}
