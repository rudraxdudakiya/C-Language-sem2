/*
 * dynamic.c
 *
 *  Created on: 18-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

struct student
{
	int rno;
	char name[50];
	float per;
}s;

void input(struct student *);
void print(struct student *);

int main()
{
	struct student *p;
	int n;
	printf("Enter the total no of students=");
	scanf("%d",&n);
	p=(struct student*)calloc(n,sizeof(struct student));

	for(int i=0;i<n;i++)
	{
		input(p+i);
		printf("\nvalue is taken at %u",p+i);
	}
	printf("Roll No\tName\tPercentage\n\n");
	for(int i=0;i<n;i++)
	{
		print(p+i);
	}
	return 0;
}
void input(struct student *p)
{
    printf("Taking input at %u",p);
	printf("Roll no: ");
	scanf("%d" ,&p->rno);

	printf("Name: ");
	scanf("%s" ,p->name);

	printf("Percentage:");
	scanf("%f" ,&p->per);
}
void print(struct student *p)
{
	printf("%d\t%s\t%.2f\n" ,p->rno,p->name,p->per);
}
