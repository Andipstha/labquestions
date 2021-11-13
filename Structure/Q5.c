/* WAP to input 5 employee records (Emp_id, Emp_name and Emp_Salary).
   Display employee information whose name starts with ‘D’.
*/

#include<stdio.h>
#include<string.h>
struct emp{
	int emp_id;
	char emp_name[25];
	int emp_salary;
}s[5];
int main()
{
	int i=0;
	char name[25];
	for(i=0;i<5;i++)
	{
		printf("\n Enter employee id:");
		scanf("%d",&s[i].emp_id);
		fflush(stdin);
		printf("\n Enter employee name:");
		gets(s[i].emp_name);
		fflush(stdin);
		printf("\n Enter salary:");
		scanf("%d",&s[i].emp_salary);
		fflush(stdin);
	}
	printf("\n the details of the employee whose name starts with d are:");
	for(i=0;i<5;i++)
	{
		strcpy(name,s[i].emp_name);
		if(name[0]=='D' || name[0]=='d')
		{
			printf("\n Employee Id= %d",s[i].emp_id);
			fflush(stdin);
			printf("\n Employee Name= %s",s[i].emp_name);
			fflush(stdin);
			printf("\n Employee Salary= %d",s[i].emp_salary);
			fflush(stdin);
		}
	}
	return 0;
}

