/*
 * struct.c
 *
 *  Created on: 08-Jan-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
#define size 5
struct student
{
	int rno,c,dbms,bcs,total;
	char name[20];
	float per;
}s[size],stemp;

int main()
{
	printf("Enter the details of the student:\n");
	int i,j;
	for(i=0;i<size;i++)
	{
		printf("Roll No.=");
		scanf("%d",&s[i].rno);
		printf("Enter the name of the student=");
		scanf("%s",s[i].name);
		printf("C=");
		scanf("%d",&s[i].c);
		printf("DBMS=");
		scanf("%d",&s[i].dbms);
		printf("BCS=");
		scanf("%d",&s[i].bcs);

		s[i].total=s[i].c+s[i].dbms+s[i].bcs;
		s[i].per=(float)s[i].total/3;
	}
	printf("\n\nRoll No.\tName\tC\tDBMS\tBCS\tTotal\tPer");
	for(i=0;i<size;i++)
	{
		printf("\n%d\t\t%s\t%d\t%d\t%d\t%d\t%f",s[i].rno,s[i].name,s[i].c,s[i].dbms,s[i].bcs,s[i].total,s[i].per);
	}
	float max,min;
	max=s[0].per;
	min=s[0].per;
	for(i=0;i<size;i++)
	{
		if(min>s[i].per)
		{
			min=s[i].per;
		}
	}
	for(i=0;i<size;i++)
	{
		if(s[i].per>max)
		{
			max=s[i].per;
		}
	}
	printf("\nHighest percentage= %.2f",max);
	printf("\nLowest percentage= %.2f",min);

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
	printf("\n\nSorted Marks:");
	printf("\nRoll No.\tName\tC\tDBMS\tBCS\tTotal\tPer");
		for(i=0;i<size;i++)
		{
			printf("\n%d\t\t%s\t%d\t%d\t%d\t%d\t%f",s[i].rno,s[i].name,s[i].c,s[i].dbms,s[i].bcs,s[i].total,s[i].per);
		}
	return 0;
}
