//3.	Write a program using DMA to take 10 numbers from user 
//and find sum of all 10 digits, and check whether sum is palindrome or not.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],*p,i=0,sum=0;
	int r,sum1,temp;
	p=a;
	p=(int*)malloc(10*sizeof(int));
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d\n",(p+i));
	}
	for(i=0;i<10;i++)
	{
		sum=sum+ *(p+i);
	}
	printf("The total sum is %d\n",sum);
	temp=sum;
	while(sum>0)
	{
		r=sum%10;
		sum1=sum1*10+r;
		sum=sum/10;
	}
	if(sum1==temp)
	{
		printf("%d is palindome\n",temp);
	}
	else
	{
		printf("%d is not palindrome\n",temp);
	}
	return 0;
}