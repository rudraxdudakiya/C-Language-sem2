/*
 * q11.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include <stdio.h>

void input(int *,int);
void print(int *,int);
void rev(int *,int);

int main()
{
	int n;

	printf("Enter the size of Array=");
	scanf("%d",&n);

	int a[n];

	input(a,n);
	print(a,n);

	printf("\nReversed array\n");
	rev(a,n);
	print(a,n);

	return 0;
}


void input(int *p,int n)
{
	for(int i=0;i<n;i++)//taking input of the array
	{
		printf("Enter a[%d]=",i);
		scanf("%d",p+i);//&a[i]
	}
	return;
}

void print(int *p,int n)
{
	for(int i=0;i<n;i++)//printing array
	{
		printf("%d\t",*(p+i));//a[i]
	}
	return;
}

void rev(int *p,int n)
{
	int temp;
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;

	}
	/*
	 * int *p1 = p;
	int i,j,temp;

	for(i=0;i<n-1;i++)
	{
		p1++;
	}

	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp = *p;
		*p = *p1;
		*p1 = temp;

		p++;
		p1--;
	}
	 *
	 */
	return ;
}
