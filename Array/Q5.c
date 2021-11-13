//5.	Write a program to take 3x3 matrix input from user and calculate sum of four corners element.
#include<stdio.h>
int main()
{
	int a[3][3],sum=0,i=0,j=0;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=a[0][0]+a[0][2]+a[2][0]+a[2][2];
	printf("Sum of corner of matrix is: %d",sum);
	return 0;
}