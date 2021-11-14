//4.	Write a program using DMA to take 10 numbers from user and find sum of all 10 digits, and check whether sum is Armstrong or not.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int *p,a[10],sum,r,count=0;
	int i=0,sum1=0,temp1=0,temp=0;
	p=a;
	p=(int*)malloc(10*sizeof(int));
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("The total sum of 10 no is : %d\n",sum);
	temp=sum;
	temp1=sum;
	while(temp>0)
	{
		r=temp%10;
		count=count+1;
		temp=temp/10;
	}
	while(sum>0)
	{
		r=sum%10;
		sum1=sum1+pow(r,count);
		sum=sum/10;
	}
	if(sum1==temp1)
	{
		printf("It is armstrong\n");
	}
	else{
		printf("It is not armstrong\n");
	}
	return 0;
}