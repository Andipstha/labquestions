#include<stdio.h>
int main()
{
     int i,j,k;
     for (i=5;i>=1;i--)
     {
        for(k=1;k<6-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf(" *");
        }
        printf("\n");
     }
     return 0;
     
}