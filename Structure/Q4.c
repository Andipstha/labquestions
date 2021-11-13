/* WAP to input 5 employee records (Emp_id, Emp_name and Emp_Salary).
   Display 3 employee information who gets the highest salary.
*/
#include<stdio.h>
#include<conio.h>
struct emp{
	int emp_id;
	char emp_name[20];
	int emp_salary;
}s[5];
int main()
{
	
	struct emp temp;
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		printf("Enter id");
		scanf("%d",&s[i].emp_id);
		fflush(stdin);
		printf("Enter name");
		gets(s[i].emp_name);
		fflush(stdin);
		printf("Enter salary");
		scanf("%d",&s[i].emp_salary);
		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(s[i].emp_salary<s[j].emp_salary);
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("The 3 employee who get the highest salary are:");
	for(i=0;i<3;i++)
	{
		printf("Id:%d\n",s[i].emp_id);
		printf("Name:%s\n",s[i].emp_name);
		printf("Salary:%d\n",s[i].emp_salary);
	}
	return 0;
