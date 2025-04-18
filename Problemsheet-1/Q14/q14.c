/*
 * q14.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */


#include<stdio.h>

struct age
{
	int d,m,y;
}dob,td;
void calculateage(struct age,struct age);
int validate(int d,int m,int y);
int main()
{
	printf("Enter in format of dd/mm/yy\n");
	printf("Your Birth date");
	scanf("%d/%d/%d",&dob.d,&dob.m,&dob.y);
	if(validate(dob.d,dob.m,dob.y)==1)
	{
		printf("Please,enter a valid dates!!\n");
		main();
	}
	printf("Today");
	scanf("%d/%d/%d",&td.d,&td.m,&td.y);
	if(validate(td.d,td.m,td.y)==1)
	{
		printf("Please,enter a valid dates!!\n");
		main();
	}
	calculateage(dob,td);
	return 0;
}
void calculateage(struct age b,struct age c)
{
	if(b.y > c.y)
	{
		printf("Birth year is greater than current year");
		exit(1);
	}
	int calculated_day=0,calculated_month=0,calculated_year=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(c.y%4==0)
		month[1]=29;
	if(b.d > c.d)
	{
		int i=month[b.m-1];
		c.d=c.d+i;
		c.m=c.m-1;
	}
	if(b.m > c.m)
	{
		c.y=c.y-1;
		c.m=c.m+12;
	}
	calculated_day=c.d-b.d;
	calculated_month=c.m-b.m;
	calculated_year=c.y-b.y;

	printf("year=%d\nmonth=%d\nday=%d",calculated_year,calculated_month,calculated_day);
}

int validate(int d,int m,int y)
{
	if(y>=1000 && y<=9999)
	{
		if(m>0 && m<=12)
		{
			if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			{
				if(d>0 && d<=31)
				{
					return 0;
				}
			}
			else if(m==4 || m==6 || m==9 || m==11)
			{
				if(d>0 && d<=30)
				{
					return 0;
				}
			}
			else if(m==2)
			{
				if(y%4==0)
				{
					if(d>=1 && d<=29)
					{
						return 0;
					}
					else
					{
						if(d>=1 && d<=28)
						{
							return 0;
						}
					}
				}
			}
		}
	}
	return 1;
}
