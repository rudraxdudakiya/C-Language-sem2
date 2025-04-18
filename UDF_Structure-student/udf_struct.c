/*
 * udf_struct.c
 *
 *  Created on: 25-Jan-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
#define size 3
struct student
{
	int rno,c,dbms,bcs,total;
	char name[20];
	float per;
}s[size],stemp;
struct student input(void);
void print(struct student);
void sort(struct student);
int main()
{
	int i;
	printf("enter the Rollno. Name and Per of student\n");
	for(i=0;i<size;i++)
	{
		printf("Student-%d\n",i+1);
		s[i]=input();
	}
	printf("Rollno.\tName\tPercentage");
	printf("\n");
	for(i=0;i<size;i++)
	{
		print(s[i]);
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		sort(s[size]);
		printf("\n");
	}
	printf("Marks after shorting\nRollno.\tName\tPercentage");
	printf("\n");
	for(i=0;i<size;i++)
	{
		print(s[i]);
		printf("\n");
	}

	return 0;
}
struct student input(void)
{
	struct student s1;
	scanf("%d%s%f",&s1.rno,s1.name,&s1.per);
	return s1;
}
void print(struct student s2)
{
	printf("%d\t%s\t%f",s2.rno,s2.name,s2.per);
	return;
}

void sort(struct student s3)
{
	struct student stemp;
	int i,j;

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(s[i].per<s[j].per)
			{
				stemp=s[i];
				s[i]=s[j];
				s[j]=stemp;
			}
		}
	}
	return;
}
