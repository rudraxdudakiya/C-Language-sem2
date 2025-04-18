/*
 * q30.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int power(int,int);
int main()
{
	int a,b;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	printf("\n%d^%d= %d",a,b,power(a,b));
	return 0;
}
int power(int n,int p)
{
	if(p==0)
		return 1;
	else
		return n*power(n,p-1);
}
