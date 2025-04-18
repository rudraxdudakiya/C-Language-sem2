/*
 * com.c
 *
 *  Created on: 18-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void pattern(int);
int main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
void pattern(int n)
{
	int i,j,k,l;
	for(i=n;i>1;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		for(k=0;k<2*(n-i);k++)
		{
			printf(" ");
		}
		for(l=0;l<i;l++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		for(k=0;k<2*(n-i);k++)
		{
			printf(" ");
		}
		for(l=0;l<i;l++)
		{
			printf("*");
		}
		printf("\n");
	}

}
