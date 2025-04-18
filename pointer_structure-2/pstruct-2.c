 /*
 * pstruct-2.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int per;
	char email[20];
};
struct student * input(void);
void print(struct student *);
int main()
{
	struct student *p;

	p=input();//p=stemp-100
	print(p);
	return 0;
}
struct student * input(void)
{
	struct student *stemp,s;
	char str[20];
	stemp=&s;
	printf("Enter the RollNo=");
	scanf("%d",&stemp->rno);
	printf("Enter the Name=");
	scanf("%s",stemp->name);
	printf("Enter the Per=");
	scanf("%d",&stemp->per);
	printf("Enter the Email=");
	scanf("%s",stemp->email);
	
	return stemp;
}
void print(struct student *p)
{
	printf("\nRollNo=%d\nName=%s\nPer=%d\nEmail=%s",p->rno,p->name,p->per,p->email);
}
