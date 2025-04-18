/*
 * q13.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include<stdio.h>

void input(int *,int);
void print(int *,int);
void insert(int *,int);
void update(int *,int);
void delete(int *,int);

int main()
{
	int n;

	printf("Enter the total element of array = ");
	scanf("%d",&n);

	int arr[n];

	input(arr,n);

	print(arr,n);

	insert(arr,n);

	update(arr,n);

	delete(arr,n);


	return 0;
}


void input(int *p,int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("Enter the element %d : ",i);
		scanf("%d",p+i);
	}

	return;
}
void print(int *p,int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}

	return;
}


void insert(int *p,int n)
{
	int i,*p1,pos,replace;
	p1 = p;

	printf("\nEnter the position where you want to insert the element : ");
	scanf("%d",&pos);


	if(pos>n)
	{
		printf("\n Insertion is not possible");
	}
	else
	{
		for(i=n;i>=pos;i--)
		{
			*(p1+i) = *(p+i-1);
		}

		printf("\nEnter the new element for position %d ",pos);
		scanf("%d",&replace);

		*(p+pos-1) = replace;

		print(p,n+1);

	}
	return;
}

void update(int *p,int n)
{
	int replace,pos;

	printf("\nEnter the position where you want to update element : ");
	scanf("%d",&pos);

	if(pos>n+1)
	{
		printf("\n Modification is not possible");
	}
	else
	{
		printf("\nEnter the element for position %d : ",pos);
		scanf("%d",&replace);

		*(p+pos-1) = replace;

		print(p,n+1);
	}

	return;
}

void delete(int *p,int n)
{
	int *p1,i,pos;

	printf("\nEnter the position where you want to delete element : ");
	scanf("%d",&pos);

	p1 = p;
	if(pos>n+1)
	{
		printf("\n Deletion is not possible");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			*(p1+i) = *(p+i+1);
		}

		*(p+i) = 0;
	}

	print(p,n-1);
	return;
}
