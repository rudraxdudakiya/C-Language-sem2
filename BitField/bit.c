/*
 * bit.c
 *
 *  Created on: 17-Jan-2024
 *      Author: root
 */


#include<stdio.h>
struct student
{
	unsigned int rno:8;
	unsigned int age:7;
	unsigned int gender:2;
	unsigned int x:10;
}t1;
int main()
{
	t1.rno=1;
	printf("%d\n",t1.rno);
	printf("size of t1=%d",sizeof(t1));
	return 0;
}
