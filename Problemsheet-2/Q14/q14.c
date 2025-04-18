/*
 * q14.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include<stdio.h>

void input(int m,int n,int (*p)[n]);
void print(int m,int n,int (*p)[n]);
void add(int m,int n,int (*p)[n],int (*p1)[n]);
void subtraction(int m,int n,int (*p)[n],int (*p1)[n]);
void transpose(int m,int n,int (*p)[n]);
void multi(int m,int n,int (*p)[n],int (*p1)[n]);

int main()
{
	int r,c;

	printf("Enter the number of row & column : ");
	scanf("%d %d",&r,&c);

	int a[r][c],b[r][c];

	printf("First matrix\n");
	input(r,c,a);
	printf("Second matrix\n");
	input(r,c,b);

	printf("\nFirst\n");
	print(r,c,a);
	printf("\nSecond\n");
	print(r,c,b);

	printf("\n\n");
	add(r,c,a,b);
	printf("\n\n");
	subtraction(r,c,a,b);

	printf("\nFirst\n");
	transpose(r,c,a);

	printf("\nSecond\n");
	transpose(r,c,b);

	printf("\n\n");
	multi(r,c,a,b);

	return 0;
}

void input(int m,int n,int (*p)[n])
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element [%d][%d] : ",i,j);
			scanf("%d",(*(p+i)+j));
		}
	}

	return;
}
void print(int m,int n,int (*ptr)[n])
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(ptr+i)+j));
		}
		printf("\n");
	}

	return;
}

void add(int m,int n,int (*p)[n],int (*p1)[n])
{
	int sum[m][n],i,j;

	int (*a)[n] = sum;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(a+i)+j) = *(*(p+i)+j) + *(*(p1+i)+j);
		}
	}

	printf("\n Addition : \n");
	print(m,n,sum);

	return;
}

void subtraction(int m,int n,int (*p)[n],int (*p1)[n])
{

	int diff[m][n],i,j;

	int (*d)[n] = diff;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(d+i)+j) = *(*(p+i)+j) - *(*(p1+i)+j);
		}
	}

	printf("\n Subtraction : \n");
	print(m,n,diff);

	return;

}

void transpose(int m,int n,int (*p)[n])
{
	int tra[n][m],i,j;

	int (*t)[m] = tra;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(t+j)+i) = *(*(p+i)+i);
		}
	}

	printf("\nTranspose\n");
	print(n,m,tra);

	return;
}
void multi(int m,int n,int (*p)[n],int (*p1)[n])
{
	int mul[m][n],i,j,k,sum;

	int (*ptr)[n] = mul;

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum =0;
			for(k=0;k<n;k++)
			{
				sum = sum + *(*(p+i)+k)  *  *(*(p1+k)+j);
			}
			*(*(ptr+i)+j) = sum;
		}
	}
	printf("\nMultiplication\n");
	print(m,n,ptr);
	return;
}
