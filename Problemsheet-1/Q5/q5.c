/*
 * q5.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int leap(int);
int main()
{
	int year,result;
	printf("Enter the Year=");
	scanf("%d",&year);
	result=leap(year);
	if(result==0)
		printf("Leap Year");
	else
		printf("Not a Leap Year");
	return 0;
}
int leap(int x)
{
	if(x%4==0)
		return 0;
	else
		return 1;
}
