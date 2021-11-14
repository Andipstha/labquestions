//4.	Write a program to add two arrays and count number of odd numbers in the final result using pointers only
#include<stdio.h>
int main()
{
	int *p,c=0,*q,*r,sum[100],n,a[100],b[100],odd,i;
	p=a;
	q=b;
	r=sum;
	printf("input size of array: ");
	scanf("%d",&n);
	printf("Enter 10 numbers");
	printf("array values of a: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(q+i));
	}	
	printf("array sum:\n ");
	for(i=0;i<n;i++)
	{
		*(r+i)=*(p+i) + *(q+i);
		printf("%d\n",*(r+i));
	}
	for(i=0;i<n;i++)
    {
    	if(*(r+i)%2!=0)
    	{
    		c++;
		}
	} 
	printf("\n%d is the total of odd number",c);
	return 0;
}