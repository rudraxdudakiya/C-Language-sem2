/*
 * q2.c
 *
 *  Created on: 26-Feb-2024
 *      Author: root
 */


#include <stdio.h>

void input(int m,int n,int (*p)[n]);
void print(int m,int n,int (*p)[n]);
void asort(int m,int n,int (*p)[n]);
void dsort(int m,int n,int (*p)[n]);

int main()
{
	int m,n;
	printf("Enter the rows & columns of array:\n");
	scanf("%d%d",&m,&n);

	int arr[m][n];

	input(m,n,arr);
	print(m,n,arr);

	printf("\nArray after sorting\n");
	asort(m,n,arr);
	print(m,n,arr);

	printf("\nArray after sorting\n");
	dsort(m,n,arr);
	print(m,n,arr);

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

void asort(int m,int n,int (*p)[n])
{
	int temp[m*n],*ptr,swap,l=0,i,j;
	ptr=temp;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(ptr+l)=(*(*(p+i)+j));
			l++;
		}
	}

//	for(i=0;i<l;i++)
//		printf("%d\t",*(ptr+i));

	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				swap=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=swap;
			}
		}
	}

	l=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			(*(*(p+i)+j))=*(ptr+l);
			l++;
		}
	}

	return;
}

void dsort(int m,int n,int (*p)[n])
{
	int temp[m*n],*ptr,swap,l=0,i,j;
	ptr=temp;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(ptr+l)=(*(*(p+i)+j));
			l++;
		}
	}

//	for(i=0;i<l;i++)
//		printf("%d\t",*(ptr+i));

	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(*(ptr+i)<*(ptr+j))
			{
				swap=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=swap;
			}
		}
	}

	l=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			(*(*(p+i)+j))=*(ptr+l);
			l++;
		}
	}

	return;
}
