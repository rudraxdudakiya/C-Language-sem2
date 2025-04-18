/*
 * q2.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
#define size 20

struct cricket
{
	char P_name[20];
	char T_name[20];
	float B_avg;
}p[size],t;
struct cricket input(void);
void print(struct cricket);
int main()
{
//taking input
	printf("Enter the following details:\n");
	for(int i=0;i<size;i++)
	{
		p[i]=input();
	}
//printing output
	printf("\n");
	for(int i=0;i<size;i++)
	{
		print(p[i]);
	}
//shorting team-wise
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(strcmp(p[i].T_name,p[j].T_name) > 0)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	int j=0;
	printf("\nTeam-wise Players & Batting average\n");
	for(int i=0;i<size;i++)
	{
		if(strcmp(p[i].T_name,p[j].T_name) !=0 || i==0)
		{
			printf("\n\nTeam Name= %s\n",p[i].T_name);
			j=i;
		}
		printf("\n%s\t%.2f",p[i].P_name,p[i].B_avg);
	}
	return 0;
}

struct cricket input(void)
{
	struct cricket p;
	printf("\nName of Player,Team,Batting Avg=");
	scanf("%s%s%f",p.P_name,p.T_name,&p.B_avg);
	return p;
}
void print(struct cricket p)
{
	printf("%s\t%s\t%.2f\n",p.P_name,p.T_name,p.B_avg);
}
