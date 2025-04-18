/*
 * q28.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int multiply(int,int);
int main()
{
	int a,b,pro=0;
	printf("enter a & b= ");
	scanf("%d%d",&a,&b);
	pro=multiply(a,b);
	printf("%d x %d = %d",a,b,pro);
}

int multiply(int a,int b)
{
	static int product=0,i=0;
	if(i<a)
	{
		product=product+b;
		i++;
		multiply(a,b);
	}
	return product;
}
