/*
 * pcount.c
 *
 *  Created on: 24-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void input(int [],int);
void print(int [],int);
int isprime(int);
int pcount(int [],int);
int main()
{
	int n,count=0;

	printf("Enter array elements=");
	scanf("%d",&n);

	int a[n];
	input(a,n);
	printf("Array Elements:\n");
	print(a,n);

	printf("\nPrime numbers:\n");
	count=pcount(a,n);
	printf("\nTotal Prime numbers=%d",count);
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
int isprime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
int pcount(int a[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(isprime(a[i])==0)
		{
			count++;
			printf("%d\t",a[i]);
		}
	}
	return count;
}
