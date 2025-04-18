/*
 * q19.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void fib(int);
int main()
{
	int n;
	printf("enter the number=");
	scanf("%d",&n);
	fib(n);
	return 0;
}
void fib(int n)
{
	int a=0,b=1,c;
	for(int i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return;
}
