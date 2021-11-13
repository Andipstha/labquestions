//7.	Write a program to take 10 numbers from user and
// display the numbers in ascending order, counting total number of digits which are odd.
#include<stdio.h>
int main()
{
	int a[10],i=0,j,temp,odd;
	printf("\n Enter 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
		    }
		}
	}
	printf("\n Numbers in ascending order are:");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			odd++;
		}
	}
	printf("\n The total number of odd number is: %d",odd);
	return 0;
}