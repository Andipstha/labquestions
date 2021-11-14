//4.	Write a program to count no of spaces, vowels in a sentence input by the user.
#include<stdio.h>
int main()
{
	char a[100];
	int i=0,vowel=0,space=0;
	printf("Enter the string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
			vowel++;
		}
		else if(a[i]==' ')
		{
			space++;
		}
	}
	printf("The no of vowel is %d\n",vowel);
	printf("The no of spaces is %d",space);
	return 0;
}