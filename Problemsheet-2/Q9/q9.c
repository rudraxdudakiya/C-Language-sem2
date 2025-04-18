/*
 * q9.c
 *
 *  Created on: 26-Feb-2024
 *      Author: root
 */


#include <stdio.h>

void input(int *,int);
void print(int *,int);
int isprime(int *);
int pcount(int *,int);

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

int isprime(int *n)
{
	int i,flag=0;
	for(i=2;i<*n;i++)
	{
		if(*n%i==0)
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

int pcount(int *p,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(isprime((p+i))==0)
		{
			if(*(p+i)==1)
				continue;
			count++;
			printf("%d\t",*(p+i));
		}
	}
	return count;
}
