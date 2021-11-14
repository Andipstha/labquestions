//2.	Write a program to reverse a string without using string handling function.
#include<stdio.h>
int main()
{
	char x[20],y[20];
	int i=0,j=0,count=0;
	printf("\n enter a string to be reversed");
	gets(x);
	while(x[count]!=0)
	{
		count++;
		j=count-1;
	}
	for(i=0;i<count;i++)
	{
		y[i]=x[j];
		j--;
	}
	y[i]='\0';
	printf("\n the reversed string is");
	puts(y);
	return 0;
}