/*
 * q29.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int calculatesum(int);
int main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	int res=calculatesum(n);
	printf("addition of all numbers upto N= %d",res);
	return 0;
}
int calculatesum(int n)
{
	if(n==1)
		return 1;
	else
		return n+calculatesum(n-1);
}
