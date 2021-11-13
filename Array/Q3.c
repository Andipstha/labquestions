//3.	Write a program to take 10 numbers from user and count how many even and odd numbers are present
#include<stdio.h>
int main()
{
	int num=0,i=0,even=0,odd=0;
	
	printf("\n enter the numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);
	}
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\n the count of even number is%d",even);
	printf("\n the count of odd number is%d",odd);
	getch();
}