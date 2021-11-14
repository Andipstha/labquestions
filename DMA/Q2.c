//2. Write a program using DMA to take 10 numbers from user and arrange them in reverse order.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],b[10],*p,*q,i=0;
	p=a;
	q=b;
	p=(int*)malloc(10*sizeof(int));
	q=(int*)malloc(10*sizeof(int));
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<10;i++)
	{
		*(q+i)=*(p+10-i-1);
	}
	printf("The array in reverse order are:");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(q+i));
	}
	return 0;
}
