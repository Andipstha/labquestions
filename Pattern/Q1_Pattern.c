#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char n[5] = "NEPAL";
    for(i=0;i<6;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("%c",n[j]);
        }
        printf("\n");
    }
    return 0;
}