/*
 * p2d.c
 *
 *  Created on: 15-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int main()
{
	int std[5][2]={
			1990,10,
			1991,20,
			1992,30,
			1993,40,
			1994,50,
	};
	int i,j;
	int (*p)[2];//pointer to 2d array
	p=std;//p=&std[0][0]
	printf("\n*(p+0)=%d",*(*(p+0)));
	printf("\n*(std+0)=%d",*(*(std+0)));
	printf("\n*(p+1)=%d",*(*(p+1)));
	printf("\n*(std+1)=%d",*(*(std+1)));
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("\nrow %d value %d",i,*(std[i]));
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("\nrow %d address %u",i,std[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("\nrow %d address %u",i,(*(std+i)+1));
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("\nrow %d value %d",i,*(*(std+i)+1));
	}
	return 0;
}
