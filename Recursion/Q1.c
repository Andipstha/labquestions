//1.	Write a program to find sum of Natural Numbers Using Recursion
#include<stdio.h>
int addNumbers(int n);
int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
 getch();
}

int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}