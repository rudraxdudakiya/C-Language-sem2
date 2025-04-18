/*
 * q11.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void input(int m,int n,int x[m][n]);
void print(int m,int n,int x[m][n]);
void asort(int m,int n,int x[m][n]);
void dsort(int m,int n,int x[m][n]);
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
	printf("Sorted in ascending order:\n");
	asort(m,n,a);
	print(m,n,a);
	printf("Sorted in descending order:\n");
	dsort(m,n,a);
	print(m,n,a);
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

void asort(int m,int n,int x[m][n])
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
void dsort(int m,int n,int x[m][n])
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
			if(temp1[i]<temp1[j])
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
