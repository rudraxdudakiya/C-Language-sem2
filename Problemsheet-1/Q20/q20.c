/*
 * q20.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int sum(int);
int main()
{
	int n,res;
	printf("Enter the Number=");
	scanf("%d",&n);
	res=sum(n);
	printf("Sum of all digits in N= %d",res);
	return 0;
}
int sum(int x)
{
	int a,sum=0;
	while(x>0)
	{
		a=x%10;
		sum=sum+a;
		x=x/10;
	}
	return sum;
}
