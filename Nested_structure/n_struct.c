/*
 * n_struct.c
 *
 *  Created on: 10-Jan-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
//method 1:
struct student
{
	int rno;
	char name[20];
	struct date
	{
		int d,m,y;//attributes can not initialized in nested structure;
	}dob;//have to define variable in nested structure;
};
//method 2:
/*
struct date
{
	int d,m,y;
};
 struct student
 {
 	int rno;
	char name[20];
	struct date dob;
};
 */
int main()
{
	struct student s;
	s.rno=7;
	strcpy(s.name,"ABC");
	s.dob.d=6;
	s.dob.m=1;
	s.dob.y=2024;

	printf("%d %s %d-%d-%d",s.rno,s.name,s.dob.d,s.dob.m,s.dob.y);
	return 0;
}
