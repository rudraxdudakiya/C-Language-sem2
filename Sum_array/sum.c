/*
 * sum.c
 *
 *  Created on: 18-Jan-2024
 *      Author: root
 */


#include<stdio.h>
void sum(int);
int main()
{
	int n;
	printf("enter the number=");
	scanf("%d",&n);
	sum(n);
	return 0;
}
void sum(int n)
{
	int i,a[n],sum=0;
		for(i=0;i<n;i++)
		{
			printf("a[%d]",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{

			printf("%d\t",a[i]);
			sum=sum+a[i];
		}
		printf("\nsum=%d",sum);
}
