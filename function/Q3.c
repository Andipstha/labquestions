//3.	Write a program using function to check whether number is Armstrong or not by passing pointers. (with value, with return)
#include<stdio.h>
#include<math.h>
int armstrong(int *);
int main()
{
	int *p,a,num;
	p=&a;
	printf("Enter a number to check armstrong or not:");
	scanf("%d",p);
	num=armstrong(p);
	if(*p==num)
	{
	  printf("It is armstrong");
    }
	else
	{
		printf("It is not armstrong");
	}
	return 0;
}
int armstrong(int *x)
{
	int temp,sum=0,temp1,r,count=0;
	temp=*x;
	temp1=*x;
	while(temp>0)
	{
		count=count+1;
		temp=temp/10;
	}
	while(*x>0)
	{
		r=*x%10;
		sum=sum+pow(r,count);
		*x=*x/10;
	}
	*x=temp1;
	return sum;
}