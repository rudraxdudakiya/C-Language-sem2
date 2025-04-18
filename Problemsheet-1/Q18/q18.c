/*
 * q18.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void input(int m,int n,int x[m][n]);
void print(int m,int n,int x[m][n]);
int isprime(int m,int n,int x[m][n]);
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
	int res=isprime(m,n,a);
	printf("prime counted= %d",res);
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

int isprime(int m,int n,int x[m][n])
{
	int i,j,flag=0,count=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(x[i][j]==1)
			{
				count=0;
			}
			for(int k=2;k<x[i][j];k++)
			{
				if(x[i][j]%k==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				count++;
			}
		}

	}
	return count;
}
