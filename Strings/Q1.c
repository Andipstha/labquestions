//1.	Write a program to print ASCII values of each and every character of the string given by the user.//
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char a[100];
	printf("Enter a string: ");
	scanf("%s",&a);
	printf("The ascii value of every character of the string is:\n");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%d\n",a[i]);
	 } 
	return 0;
}