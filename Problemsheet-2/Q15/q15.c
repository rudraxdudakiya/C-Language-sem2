/*
 * q15.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include<stdio.h>

void input(int m,int n,int (*p)[n]);
void print(int m,int n,int (*p)[n]);
void rev(int m,int n,int (*p)[n]);

int main()
{
	int r,c;

	printf("Enter row & col : ");
	scanf("%d %d",&r,&c);

	int arr[r][c];

	input(r,c,arr);
	print(r,c,arr);

	rev(r,c,arr);
	printf("\nReversed 2D array\n");
	print(r,c,arr);

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

void print(int m,int n,int (*p)[n])
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}

	return;
}

void rev(int m,int n,int (*p)[n])
{
	int tsize = m * n,i,j,temp,t=0;
	int c[tsize],*ptr;

	ptr=c;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(ptr+t) = *(*(p+i)+j);
			t++;
		}
	}

	for(i=0,j=tsize-1;i<j/2;i++,j--)
	{
		temp = *(ptr+i);
		*(ptr+i) = *(ptr+j);
		*(ptr+j) = temp;
	}

	t=0;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(p+i)+j) = *(ptr+t);
			t++;
		}
	}

	return;
}
