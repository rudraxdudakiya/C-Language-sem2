/*
 * arrofpointer.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int main()
{
	char author[5][20]={
			"Balagurusamy",
			"Yashvnt kanetkar",
			"William Stalling",
			"Tannen Baum",
			"Behrouz Forouzan"
	};
	char *p1,*p2,*p3,*p4,*p5;
	char *p[5];//Array of pointer p
	p1=author[0];
	p2=author[1];
	p3=author[2];
	p4=author[3];
	p5=author[4];
	printf("\nauthor[0]=%s",p1);
	printf("\nauthor[1]=%s",p2);
	printf("\nauthor[2]=%s",p3);
	printf("\nauthor[3]=%s",p4);
	printf("\nauthor[4]=%s",p5);
	for(int i=0;i<5;i++)
	{
		p[i]=author[i];
	}
	for(int i=0;i<5;i++)
	{
		printf("\nauthor[%d]= %s",i,p[i]);
	}
	printf("\nEnter string=");
	scanf("%s",p[0]);
	printf("\n%s",p[0]);


	return 0;
}
