/*
 * q8.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int armstrong(int);
int main()
{
	int n,result;
	printf("Enter the Number=");
	scanf("%d",&n);
	result=armstrong(n);
	if(result==1)
		printf("%d is an Armstrong Number",n);
	else
		printf("%d isn't an Armstrong Number",n);
	return 0;
}
int armstrong(int n)
{
	int r;
	int a=n,count=0;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	int b=n,sum=0;
	while(b>0)
	{
		int pro=1;
		r=b%10;
		for(int i=1;i<=count;i++)
		{
			pro=pro*r;
		}
		sum=sum+pro;
		b=b/10;
	}
	if(sum==n)
		return 1;
	else
		return 0;

}
