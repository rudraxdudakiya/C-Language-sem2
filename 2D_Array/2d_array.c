/*
 * 2d_array.c
 *
 *  Created on: 25-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void input(int m,int n,int x[m][n]);
void print(int m,int n,int x[m][n]);
int smallest(int m,int n,int x[m][n]);
int largest(int m,int n,int x[m][n]);
void sort(int m,int n,int x[m][n]);
int main()
{
	int m,n,min,max;
	printf("enter the no of rows=");
	scanf("%d",&m);
	printf("enter the no of colums=");
	scanf("%d",&n);
	int a[m][n];
	input(m,n,a);
	print(m,n,a);
	min=smallest(m,n,a);
	printf("\nSmallest element= %d",min);
	max=largest(m,n,a);
	printf("\nlargest element= %d",max);
	sort(m,n,a);
	printf(m,n,a);
	return 0;
}

void input(int m,int n,int x[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	return;
}

void print(int m,int n,int x[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}


int smallest(int m,int n,int x[m][n])
{
	int i,j,min=x[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>x[i][j])
			{
				min=x[i][j];
			}
		}
	}
	return min;
}

int largest(int m,int n,int x[m][n])
{
	int i,j,max=x[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<x[i][j])
			{
				max=x[i][j];
			}
		}
	}
	return max;
}
void sort(int m,int n,int x[m][n])
{
	int i,j;
		int a=0,temp1[30];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				temp1[a]=x[i][j];
				a++;
			}
		}
		int temp=0;
		for(i=0;i<a;i++)
		{
			for(j=i+1;j<a;j++)
			{
				if(temp1[i]>temp1[j])
				{
					temp=temp1[i];
					temp1[i]=temp1[j];
					temp1[j]=temp;
				}
			}
		}
		a=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			    x[i][j]=temp1[a];
				a++;
			}
		}

	return;
}


