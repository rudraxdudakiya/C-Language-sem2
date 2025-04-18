/*
 * slack.c
 *
 *  Created on: 10-Jan-2024
 *      Author: root
 */


#include<stdio.h>
struct student
{
	int rno;
	char name[21];
	float per;
};
int main()
{
	struct student s1;
	printf("size of structure= %d",sizeof(s1));
	return 0;
}
