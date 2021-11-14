//4.	Write a program to find factorial of a given number using recursion.
#include<stdio.h>
int fact(int);
int main()
{
	int result=0;
	int num;
	printf("\n enter the number you want to know the factorial");
	scanf("%d",&num);
	result=fact(num);
	printf("\n result=%d",result);
	getch();
}
int fact(int x)
{
	if(x!=0)
	{
		return(x*fact(x-1));
	}
	else
	{
		return 1;
	}
}
