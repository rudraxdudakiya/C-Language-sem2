/*
 * callbyvalue.c
 *
 *  Created on: 15-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter a,b=");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("a=%d\nb=%d",a,b);
	return 0;
}
void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	y=c;
printf("x=%d\ny=%d\n",x,y);
}
