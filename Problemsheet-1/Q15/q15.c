/*
 * q15.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct date
{
	int d,m,y;
}d,p;
struct date input(void);
int validate(int,int,int);
int main()
{
	printf("Enter date\n");
	d=input();
	printf("%d/%d/%d is ",d.d,d.m,d.y);
	int res=validate(d.d,d.m,d.y);
	if(res==0)
		printf("valid date");
	else
		printf("invalid date");
	return 0;
}
struct date input(void)
{
	struct date d;
	printf("dd/mm/yy");
	scanf("%d/%d/%d",&d.d,&d.m,&d.y);
	return d;
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
