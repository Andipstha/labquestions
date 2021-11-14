//1.	Write a program using function to check whether number is prime or not. 
#include<stdio.h>
int prime(int);
int main()
{
	int num;
	int result=0;
	printf("\n enter the number");
	scanf("%d",&num);
	result=prime(num);
	if(result==1)
	{
		printf("\n the given number is prime number");
	}
	else
	{
		printf("\n the given number is not prime number");
	}
	return 0;
}
int prime(int x)
{
	int y,z=0;
	for(y=1;y<=x;y++)
	{
		if(x%y==0)
		{
			z=z+1;
		}
	}
	if(z==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
} 