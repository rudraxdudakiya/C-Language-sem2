/*
 * q10.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void input(int [],int);
void print(int [],int);
void asort(int [],int);
void dsort(int [],int);
int main()
{
	int n;
	printf("enter n=");
	scanf("%d",&n);
	int a[n];
	input(a,n);
	print(a,n);
	asort(a,n);
	printf("\nSorting in Ascending Order:\n");
	print(a,n);
	dsort(a,n);
	printf("\nSorting in descending Order:\n");
	print(a,n);

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

void asort(int x[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	return;
}

void dsort(int x[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]<x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	return;
}

