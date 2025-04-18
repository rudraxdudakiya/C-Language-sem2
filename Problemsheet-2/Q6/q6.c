/*
 * q6.c
 *
 *  Created on: 28-Feb-2024
 *      Author: root
 */


#include <stdio.h>

void xstrcat(char *,char *);

int main()
{
	char s1[20],s2[20];
	printf("Enter Strings");
	scanf("%s %s" ,s1,s2);
	xstrcat(s1,s2);
	printf("Mereged string 1 =%s",s1);
	return 0;
}

void xstrcat(char *p1,char *p2)
{
	while(*p1!='\0')
	{
		p1++;
	}
	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}
