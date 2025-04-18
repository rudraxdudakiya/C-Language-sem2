/*
 * emp.c
 *
 *  Created on: 10-Jan-2024
 *      Author: root
 */


#include<stdio.h>
#define size 5
struct emp
{
	int id;
	char name[20];
	float bsalary,da,hra,ma,gross;
};
int main()
{
	struct emp e[size],etemp;
	int i,j;
	float min,max;
	for(i=0;i<size;i++)
	{
		printf("Enter employee Id");
		scanf("%d",&e[i].id);
		printf("Name of the Employee");
		scanf("%s",e[i].name);
		printf("Enter the basic salary of %s",e[i].name);
		scanf("%f",&e[i].bsalary);

		e[i].da=e[i].bsalary*0.4;
		e[i].hra=e[i].bsalary*0.2;
		e[i].ma=e[i].bsalary*0.05;
		e[i].gross=e[i].bsalary+e[i].da+e[i].hra+e[i].ma;
	}
	printf("\nID\tName\tBasic Salary\tDA\tHRA\tMA\tGosss Salary");
	for(i=0;i<size;i++)
	{
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",e[i].id,e[i].name,e[i].bsalary,e[i].da,e[i].hra,e[i].ma,e[i].gross);
	}
	min=e[0].gross;
	max=e[0].gross;
	for(i=0;i<size;i++)
	{
		if(min>e[i].gross)
		{
			min=e[i].gross;
		}
	}
	for(i=0;i<size;i++)
	{
		if(e[i].gross>max)
		{
			max=e[i].gross;
		}
	}
	printf("\nHighest gross salary= %f",max);
	printf("\nLowest gross salary= %f",min);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(e[i].gross<e[j].gross)
			{
				etemp=e[i];
				e[i]=e[j];
				e[j]=etemp;
			}
		}
	}
	printf("\nID\tName\tBasic Salary\tDA\tHRA\tMA\tGosss Salary");
	for(i=0;i<size;i++)
	{
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",e[i].id,e[i].name,e[i].bsalary,e[i].da,e[i].hra,e[i].ma,e[i].gross);
	}
	return 0;
}
