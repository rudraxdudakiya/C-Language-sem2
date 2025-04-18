/*
 * udf.c
 *
 *  Created on: 17-Jan-2024
 *      Author: root
 */


/*
 * udf.c
 *
 *  Created on: 17-Jan-2024
 *      Author: root
 */


/*
 * udf.c
 *
 *  Created on: 17-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
void div(int,int);
int main()
{
	int x,y,a,s,m;
	printf("enter the values");
	scanf("%d %d",&x,&y);
	a=add(x,y);
	s=sub(x,y);
	m=mul(x,y);
	printf(" x+y=%d \n x-y=%d \n x*y=%d",a,s,m);
	div(x,y);
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
void div(int a,int b)
{
	if(b==0)
	{
		printf("\nDiv is not possible");
	}
	else
	{
		printf("\n Div=%d",a/b);
	}
	return ;
}
