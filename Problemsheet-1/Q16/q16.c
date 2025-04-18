/*
 * q16.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct date
{
	int d,m,y;
}d1,d2;
struct date input(void);
int validate(struct date);
int compare(struct date,struct date);
int main()
{
	printf("Enter date 1\ndd/mm/yy=");
	d1=input();
	printf("Enter  date 2\ndd/mm/yy=");
	d2=input();
	if(validate(d1)!=0 || validate(d2)!=0)
	{
		printf("Please,enter valid dates!");
		exit(1);
	}
	int res;
	res=compare(d1,d2);
	if(res==0)
		printf("Dates are same\n");
	else
		printf("Dates are not same\n");
	return 0;
}
struct date input(void)
{
	struct date d1;
	scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
	return d1;
}

int validate(struct date d)
{
	if(d.y>=1000 && d.y<=9999)
	{
		if(d.m>0 && d.m<=12)
		{
			if(d.m==1 || d.m==3 || d.m==5 || d.m==7 || d.m==8 || d.m==10 || d.m==12)
			{
				if(d.d>0 && d.d<=31)
				{
					return 0;
				}
			}
			else if(d.m==4 || d.m==6 || d.m==9 || d.m==11)
			{
				if(d.d>0 && d.d<=30)
				{
					return 0;
				}
			}
			else if(d.m==2)
			{
				if(d.y%4==0)
				{
					if(d.d>=1 && d.d<=29)
					{
						return 0;
					}
					else
					{
						if(d.d>=1 && d.d<=28)
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
int compare(struct date d1,struct date d2)
{
	if(d1.d==d2.d)
	{
		if(d1.m==d2.m)
		{
			if(d1.y==d2.y)
			{
				return 0;
			}
		}
	}
	return 1;
}
