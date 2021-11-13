//6.	Write a program to combine two different words into one without using 
//string handling function (e.g.: word 1: kist, word 2: college, Result: kist college)
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	int i=0,j=0;
	printf("\n enter the first string:");
	gets(str1);
	printf("\n enter the second string");
	gets(str2);
	while(str1[i]!='\0')
	{
		i++;
	}
	str1[i]=' ';
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("\n the concatenated string is");
	puts(str1);
	getch();
}