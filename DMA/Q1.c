//1.	Write a program using DMA to take 10 numbers from user and only display numbers which aren't prime.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,a[10],count=0;
	int i,j;
	p=a;
	p=(int*)malloc(10*sizeof(int));
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	printf("The non prime numbers are:\n");
	for(i=0;i<10;i++)
	{
	    for(j=1;j<=10;j++)
		{
			if(*(p+i)%j==0)
			{
				count++;
			}
     	}
		 if(count>2)
		 {
		 	printf("%d\n",*(p+i));
		 }
		 count=0;	
	}
	return 0;
}