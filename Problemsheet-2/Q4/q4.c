/*
 * q4.c
 *
 *  Created on: 28-Feb-2024
 *      Author: root
 */



#include <stdio.h>

void input(int m,int n,int (*p)[n]);
void print(int m,int n,int (*p)[n]);
int total(int m,int n,int (*p)[n]);

int main()
{
	int m,n;
	printf("Enter the rows & columns of array:\n");
	scanf("%d%d",&m,&n);

	int arr[m][n];

	input(m,n,arr);
	print(m,n,arr);

	printf("\nTotal =%d"  ,total(m,n,arr));

	return 0;
}


void input(int m,int n,int (*p)[n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=" ,i,j);
			scanf("%d" ,(*(p+i)+j));
		}
	}
	return;
}

void print(int m,int n,int (*p)[n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t" ,(*(*(p+i)+j)));
		}
		printf("\n");
	}
	return;
}

int total(int m,int n,int (*p)[n])
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum+=*(*(p+i)+j);
		}
	}
	return sum;
}
