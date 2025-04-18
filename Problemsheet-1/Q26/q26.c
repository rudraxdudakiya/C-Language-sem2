/*
 * q26.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int factorial(int);
int main()
{
	int n,res;
	printf("Give factorial of ");
	scanf("%d",&n);
	res=factorial(n);
	printf("Factorial of %d = %d",n,res);
	return 0;
}
int factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}
