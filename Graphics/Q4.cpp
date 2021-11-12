#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	rectangle(250,200,400,300);
	line(250,200,300,150);
	line(400,200,450,150);
	line(300,150,450,150);
	line(450,150,450,250);
	line(450,250,400,300);
	getch();
	closegraph();
	return 0;
}
