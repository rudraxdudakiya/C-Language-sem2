/*
 * q13.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */


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
	printf("\nLargest element= %d",max);
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
