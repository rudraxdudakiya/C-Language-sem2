/*
 * functionpointer.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include <stdio.h> 
#include <math.h>

int sum(int,int);
int mul(int,int);
int diff(int,int);
int sqr(int);

int main()
{
	int x,y;
	printf("Enter two integers for x and y");
	scanf("%d%d",&x,&y);
	int (*ptr)(int,int);
	int (*p)(int);
	ptr=sum;
	printf("Sum =%d",(*ptr)(x,y));
	ptr=diff;
	printf("\ndiff =%d",(*ptr)(x,y));
	ptr=mul;
	printf("\nmul =%d",(*ptr)(x,y));
	p=sqr;
	printf("\nsqure root of x =%d",(*p)(x));
	return 0;
}
int sum(int a,int b)
{
	return a+b;
}

int mul(int a,int b)
{
	return a*b;
}

int diff(int a,int b)
{
	return a-b;
}

int sqr(int a)
{
	return sqrt(a);
}
