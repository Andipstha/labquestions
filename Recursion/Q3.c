//3.	Write a program to find the power of a given number using recursion
#include<stdio.h>
int power(int ,int );
int main()
{
int result,a,b;
printf("enter the power and number");
scanf("%d%d",&a,&b);
result=power(a,b);
printf("the result is %d",result);
getch();
}
int power(int x,int y)
{
int result1=1,i;
for(i=1;i<=x;i++)

result1=result1*y;

return result1;
}