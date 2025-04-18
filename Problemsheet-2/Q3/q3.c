/*
 * q3.c
 *
 *  Created on: 26-Feb-2024
 *      Author: root
 */



#include <stdio.h>

void input(int *,int);
void print(int *,int);
int total(int *,int);

int main()
{
	int n;
	printf("Enter the size of Array=");
	scanf("%d",&n);
	int a[n];

	input(a,n);
	print(a,n);

	printf("\nTotal =%d" ,total(a,n));

	return 0;
}

void input(int *p,int n)
{
	for(int i=0;i<n;i++)//taking input of the array
	{
		printf("Enter a[%d]=",i);
		scanf("%d",p+i);//&a[i]
	}
	return;
}

void print(int *p,int n)
{
	for(int i=0;i<n;i++)//printing array
	{
		printf("%d\t",*(p+i));//a[i]
	}
	return;
}

int total(int *p,int n)
{
	int sum =0;
	for(int i=0;i<n;i++)//printing array
	{
		sum+=*(p+i);
	}
	return sum;
}
