/*
 * odd_even.c
 *
 *  Created on: 24-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int isodd(int);
int main()
{
	int n,result;
	printf("enter the number=");
	scanf("%d",&n);
	result=isodd(n);
	if(result==0)
		printf("%d is odd",n);
	else
		printf("%d is even",n);
	return 0;
}
int isodd(int n)
{
	if(n%2!=0)
		return 0;
	else
		return 1;
}
