//5.	Write a program to convert a lower case string to upper case string without using string handling function.
#include<stdio.h>
int main()
{
	char a[20];
	int i=0;
	printf("\n enter your string in lowercase:");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;
		i++;
	}
	printf("\n the uppercase string is:");
	puts(a);
	getch();
}