/*
 * q22.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int isprime(int);
int main()
{
	int n,res;
	printf("enter the number=");
	scanf("%d",&n);
	res=isprime(n);
	if(res==0)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
	return 0;
}
int isprime(int n)
{
	int i,flag=0;
	if(n==1)
		return 1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
