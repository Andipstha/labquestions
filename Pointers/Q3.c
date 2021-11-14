//3.	Write a program to enter 10 numbers and calculate even and odd numbers count using pointers only.
#include<stdio.h>
int main()
{
	int *p,a[10],i,odd=0,even=0;
	p=a;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<10;i++)
	{
		if(*(p+i)%2==0)
	    {
	    	even++;
		}
		else
		{
			odd++;
		}
	}
	printf("The number of odd number is %d\n",odd);
	printf("The number of even number is %d\n",even);
	return 0;
}