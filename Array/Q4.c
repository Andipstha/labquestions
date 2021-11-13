//4. Write a program to take 3x3 matrix input from user and calculate sum of diagonal elements.
#include<stdio.h>
int main()
{
	int a[3][3],dsum=0,i=0,j=0;
	printf("\n Enter elements of matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				dsum=dsum+a[i][j];
			}
		}
	}
	printf("\n Sum of diagonal of matrix is: %d",dsum);
	return 0;
}