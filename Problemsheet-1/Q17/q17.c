/*
 * Q17.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct time
{
	int hour,minute,second;
}t;
struct time input(void);
void display(struct time);
int validate(struct time);
int main()
{
	printf("enter the time\n");
	t=input();
	printf("Time\n");
	display(t);
	int res=validate(t);
	if(res==0)
		printf("valid time");
	else
		printf("invalid time");
	return 0;
}

struct time input(void)
{
	struct time t1;
	printf("hour,minutes,seconds\n");
	scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
	return t1;
}
void display(struct time t2)
{
	printf("Hours: %d\nMinuts: %d\nSeconds: %d\n",t2.hour,t2.minute,t2.second);
	return;
}
int validate(struct time t3)
{
	if(t3.hour>=0 && t3.hour<=23)
	{
		if(t3.minute>=0 && t3.minute<=59)
		{
			if(t3.second>=0 && t3.second<=59)
			{
				return 0;
			}
		}
	}
	return 1;
}
