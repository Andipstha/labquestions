/*    WAP using structure to input records of 5 students.
      Members include name, roll number, and marks obtained 
      in math, C programming and English. Display the records
      of students who have passed in C programming.
*/
#include<stdio.h>
struct stud
{
	char name[25];
	int roll;
	int math;
	int c;
	int eng;
}s[5];
int main()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("\n enter name:");
		gets(s[i].name);
		fflush(stdin);
		printf("\n enter roll number");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("\n enter the marks of math");
		scanf("%d",&s[i].math);
		fflush(stdin);
		printf("\n enter the marks of c programming");
		scanf("%d",&s[i].c);
		fflush(stdin);
		printf("\n enter the marks of english");
		scanf("%d",&s[i].eng);
		fflush(stdin);
	}
	printf("\n the records of the students who have passed c programming are:");
	for(i=0;i<5;i++)
	{
		if(s[i].c>=40&&s[i].c<=100)
		{
			printf("\n name=%s",s[i].name);
			fflush(stdin);
			printf("\n roll number=%d",s[i].roll);
			fflush(stdin);
			printf("\n marks of math=%d",s[i].math);
			fflush(stdin);
			printf("\n marks of c=%d",s[i].c);
			fflush(stdin);
			printf("\n marks of english=%d",s[i].eng);
			fflush(stdin);
		}
	}
	return 0;
}
