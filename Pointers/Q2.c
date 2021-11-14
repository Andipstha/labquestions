//2.	Write a program to find highest value amongst 10 numbers given by user using pointers.
#include<stdio.h>
int main()
{
	int *p,a[10],i,j,temp;
	p=a;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("%d is the highest number",*(p+9));
	return 0;
}