//6.	Write a program to take two 3X3 matrix, add them and display transpose of final result.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],sum[3][3],trans[3][3],i=0,j=0;
	printf("\n Enter the elements of a matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  scanf("%d",&a[i][j]);
	    }
	}
	printf("\n Enter the elements of b matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  scanf("%d",&b[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n The sum of matrix is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	// Transposing matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trans[i][j]=sum[j][i];
		}
	}
	printf("\n Transpose of matrix is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}