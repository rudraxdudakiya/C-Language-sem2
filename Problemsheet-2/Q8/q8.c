/*
 * q8.c
 *
 *  Created on: 28-Feb-2024
 *      Author: root
 */


#include <stdio.h>

void xstrcpy(char *,char *);

int main()
{
	char s1[20],s2[20];
	printf("Enter String");
	scanf("%s" ,s1);
	xstrcpy(s2,s1);
	printf("copied string 2 =%s",s2);
	return 0;
}

void xstrcpy(char *p2,char *p1)
{
	while(*p1!='\0')
	{
		*p2=*p1;
		p2++;
		p1++;
	}
	*p2='\0';
	return ;
}
