/*
 * p1d.c
 *
 *  Created on: 15-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50};
	int *p,*ptr;
	p=a;//p=&a[0]-address of a[0] is assigned to p
	ptr=a;
	for(int i=0;i<5;i++)
	{
		printf("\nAddress of=%u value= %d",p,*p);
		p++;
	}
	printf("\n");
	printf("\nCurrent address of p=%u",p);
	p--;//p=address of a[4](last)
	for(int i=0;i<5;i++)
	{
		printf("\nAddress of=%u value= %d",p,*p);
		p--;
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("\nAddress of ptr=%u value=%d",(ptr+i),*(ptr+i));
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("\nAddress of a[i]=%u value=%d",(a+i),*(a+i));
	}
	return 0;
}
