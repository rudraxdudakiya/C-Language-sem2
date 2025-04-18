/*
 * q21.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */



#include<stdio.h>
void input(int m,int n,int x[m][n]);
void print(int m,int n,int x[m][n]);
int sum(int m,int n,int x[m][n]);
int main()
{
	int m,n;
	printf("enter the no of rows=");
	scanf("%d",&m);
	printf("enter the no of colums=");
	scanf("%d",&n);
	int a[m][n];
	input(m,n,a);
	print(m,n,a);
	printf("sum= %d",sum(m,n,a));
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

int sum(int m,int n,int x[m][n])
{
	int sum=0;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+x[i][j];
		}
	}

	return sum;
}
