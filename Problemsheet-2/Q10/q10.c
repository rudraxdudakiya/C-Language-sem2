/*
 * q10.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include <stdio.h>

int isarm(int *);

int main()
{
	int n,n1;

	printf("Enter any number = ");
	scanf("%d",&n);

	n1=n;

	if(isarm(&n)==0)
	{
		printf("\n %d is armstrong number",n1);
	}
	else
	{
		printf("\n %d is not armstrong  number",n1);
	}

	return 0;
}

int isarm(int *ptr)
{
	int i,j,sum=0,count=0,a,b,r,pro;

	a = *ptr;
	b = *ptr;

	while(*ptr>0)
	{
		count++;
		*ptr = *ptr / 10;
	}

	for(i=1;i<=count;i++)
	{
		 pro=1;
		r = a % 10;
		for(j=1;j<=count;j++)
		{
			pro = pro * r;
		}
		a = a/10;
		sum += pro;
	}

	if(b==sum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
