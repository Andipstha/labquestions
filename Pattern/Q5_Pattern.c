#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for (j=i;j<=3+i;j++)
        {
          if(j%2)
          {
              printf(" $");
          }
          else
          {
              printf(" #");
          }
        }
        printf("\n");
    }
    return 0;
}
/*
(i,j)    0<1  0<2     
(0,0)$ (0,1)* (0,2)$ (0,3)*
(1,0)* (1,1)$ (1,2)* (1,3)$
(2,0)$ (2,1)* (2,2)$ (2,3)*
(3,0)* (3,1)$ (3,2)* (3,3)$

*/

