//1.	Write a program to add all the even numbers in an array and display result using pointers only.
#include<stdio.h>
int main()
{
	int *p,a[10],i,even=0;
	p=a;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<10;i++)
	{
		if(*(p+i)%2==0)
		{
			even=even+*(p+i);
		}
	}
	printf("The sum of even number is %d",even);
	return 0;
}
