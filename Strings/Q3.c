//3.	Write a program to compare whether two strings are identical or not without using string handling function.
#include<stdio.h>
int main()
{
	char x[20],y[20];
	int i=0,c=0;
	printf("\n enter the first string:");
	gets(x);
	printf("\n enter the second string:");
	gets(y);
	for(i=0;((x[i]!='\0') || (y[i]!='\0'));i++) 
	{
		if(x[i]!=y[i])
		{
			c++;
			break;
		}
	}
	if(c==0)
	{
		printf("\n they are identical");
	}
	else
	{
		printf("\n they are not identical");
	}
	return 0;
}