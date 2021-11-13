#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp
{
	
	char name[25];
	int id;
	int salary;
};
int main()
{
	FILE *p,*q;
	struct emp s[100],temp;
	int i=0,j=0,n=0;
	printf("input no of records you want ");
	scanf("%d",&n);
	fflush(stdin);
	p=fopen("D:\\pu.txt","w+");
	if(p==NULL)
	{
		printf("file not opened");
		exit(0);
		
	}
	else
	{
			printf("\n Enter data:\n");
			for(i=0;i<n;i++)
			{
				printf("Enter name of %d person",i+1);
				gets(s[i].name);
				fflush(stdin);
				printf("Enter id of %d person",i+1);
				scanf("%d",&s[i].id);\
				fflush(stdin);
				printf("Enter salary of %d person",i+1);
				scanf("%d",&s[i].salary);
				fflush(stdin);
			}
	}
	q=fopen("D:\\pu.txt","r");
	if(q==NULL)
	{
		printf("file not opened");
		exit(0);
		
	}
	else
	{
		for(i=0;i<n;i++) 
		{
			for(j=i+1;j<n;j++) 
			{
				if(s[i].salary<s[j].salary)
				{
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
			}
		}
		printf("\nThe details of highest salary person is:");
		printf("\n Name:");
		puts(s[0].name);
		fflush(stdin);
		printf("\n Id=%d",s[0].id);
		printf("\n salary=%d",s[0].salary);
	}
	fclose(p);
	fclose(q);
	return 0;
}