/*
 * sort.c
 *
 *  Created on: 15-Feb-2024
 *      Author: root
 */


#include<stdio.h>
#define size 5
int main()
{
	int a[size],*p;
	p=a;
	for(int i=0;i<size;i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("%d\t",*(p+i));
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(*(p+i)>*(p+j))
			{
				int t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	printf("\nAfter shorting\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
}
