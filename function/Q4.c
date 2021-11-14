//4.	Write a program to check whether number is Armstrong or not using function. (with value, with return).
#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int num,a,b;
	int result=0;
	printf("\n enter a number");
	scanf("%d",&num);
	a=num;
	b=num;
	result=armstrong(num);
	if(result==1)
	{
		printf("\n the given number is armstrong");
	}
	else
	{
		printf("\n the given number is not armstrong");
	}
	getch();
}
int armstrong(int x)
{
	int sum=0,temp=0,temp1=0,count=0,rem=0;
	while(temp>0)
	{
		rem=temp%10;
		count=count+1;
		temp=temp/10;
	}
	while(x>0)
	{
		rem=x%10;
		sum=sum+pow(rem,count);
		x=x/10;
	}
	if(sum==temp1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}