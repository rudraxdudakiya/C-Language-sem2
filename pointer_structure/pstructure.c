/*
 * pstructure.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct student
{
	int rno;
	float per;
};
int main()
{
	struct student s,*p;
	p=&s;
	printf("Enter RollNo=");
	scanf("%d",&p->rno);//scanf("%d",&s.rno);
	printf("Enter per=");
	scanf("%f",&p->per);//scanf("%f",&s.per);

	printf("RollNo.=%d per=%.2f",p->rno,p->per);//printf("RollNo.=%d per=%.2f",s.rno,s.per);
	return 0;
}
