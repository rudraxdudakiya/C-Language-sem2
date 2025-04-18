/*
 * q8.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int factorial(int);
int main()
{
	int n,result;
	printf("Give Factorial of ");
	scanf("%d",&n);
	result=factorial(n);
	printf("Factorial of %d is %d",n,result);
	return 0;
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

