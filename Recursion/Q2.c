//2.	Write a program to generate Fibonacci Series using recursion.
#include<stdio.h>
int Fibonacci(int);
int main()
{
   int n,i,c=0; 
   printf("input number: ");
   scanf("%d",&n);
   printf("Fibonacci series\n");
   for (i=1;i<=n;i++)
   {
    	printf("%d\t",Fibonacci(c));
    	c++; 
   }
   getch();
}
 
int Fibonacci(int n)
{
   if (n==0)
	{
      return 0;
	}
   else if (n==1)
    {
	  return 1;
	}
	
   else
	{
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
	}
}
