/*
 * q12.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */



#include<stdio.h>
void input(int [],int);
void print(int [],int);
int smallest(int [],int);
int largest(int [],int);
int main()
{
	int n;
	printf("enter n=");
	scanf("%d",&n);
	int a[n],min,max;
	input(a,n);
	print(a,n);
	min=smallest(a,n);
	max=largest(a,n);
	printf("\nSmallest=%d",min);
	printf("\nLargestest=%d",max);
	return 0;
}
void input(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&x[i]);
	}
	return;
}

void print(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	return;
}
int smallest(int x[],int n)
{
	int i,min;
	min=x[0];
	for(i=0;i<n;i++)
	{
		if(min>x[i])
		{
			min=x[i];
		}
	}
	return min;
}

int largest(int x[],int n)
{
	int i,max;
	max=x[0];
	for(i=0;i<n;i++)
	{
		if(max<x[i])
		{
			max=x[i];
		}
	}
	return max;
}
