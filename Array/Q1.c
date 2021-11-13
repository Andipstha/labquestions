//1.	Write a program to take 10 numbers from user and only display numbers which are prime.
#include<stdio.h>
int main()
{
	int a[10],i=0,j=0,count=0;
	printf("\n enter the numbers");
	for(i=0;i<10;i++)
	
	{
		scanf("%d",&a[i]);
	}
	printf("\n the list  of prime numbers are:");
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=0;j<=i;j++)
		{
			if(a[i]%a[j]==0)
			{
				count++;
			}
			
		}
		if(count==2)
		{
			printf("\n%4d is prime number",a[i]);
		}
	}
	return 0;
}
