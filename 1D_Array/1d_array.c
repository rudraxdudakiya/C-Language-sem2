/*
 * array.c
 *
 *  Created on: 24-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void input(int [],int);
void print(int [],int);
int smallest(int [],int);
int largest(int [],int);
void asort(int [],int);
void dsort(int [],int);
int calculatesum(int [],int);
int main()
{
	int n;
	printf("enter n=");
	scanf("%d",&n);
	int a[n],sum,min,max;
	input(a,n);
	print(a,n);
	sum=calculatesum(a,n);
	min=smallest(a,n);
	max=largest(a,n);
	printf("\nSum= %d",sum);
	printf("\nSmallest=%d",min);
	printf("\nLargestest=%d",max);
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

int calculatesum(int x[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+x[i];
	}
	return sum;
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

