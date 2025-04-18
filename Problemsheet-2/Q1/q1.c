/*
 * sort.c
 *
 *  Created on: 15-Feb-2024
 *      Author: root
 */


#include <stdio.h>

void input(int *,int);
void print(int *,int);
void asort(int *,int);
void dsort(int *,int);

int main()
{
	int n;

	printf("Enter the size of Array=");
	scanf("%d",&n);

	int a[n];

	input(a,n);
	print(a,n);

	printf("\nAfter shorting\n");
	asort(a,n);
	print(a,n);

	printf("\nAfter shorting\n");
	dsort(a,n);
	print(a,n);

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

void asort(int *p,int n)
{
	for(int i=0;i<n;i++)//shorting of array in ascending order
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				int t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	return;
}

void dsort(int *p,int n)
{
	for(int i=0;i<n;i++)//shorting of array in ascending order
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				int t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	return;
}
