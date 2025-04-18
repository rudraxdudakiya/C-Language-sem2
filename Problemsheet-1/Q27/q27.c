/*
 * q27.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int fib(int);
int main()
{
	int n;
	printf("enter the N=");
	scanf("%d",&n);
	printf("Fibonacci series:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
}
int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
