/*
 * q5.c
 *
 *  Created on: 28-Feb-2024
 *      Author: root
 */


#include <stdio.h>

int xstrcmp(char *p1,char *p2);

int main()
{
	char s1[20],s2[20];
	printf("Enter Strings");
	scanf("%s %s" ,s1,s2);
	if(xstrcmp(s1,s2)==0)
	{
		printf("Both strings are same");
	}
	else
	{
		printf("Both strings are not same");
	}
	return 0;
}

int xstrcmp(char *p1,char *p2)
{
	int diff=0;
	while(*p1 && *p2 !='\0')
	{
		if(*p1==*p2)
		{
			p1++;
			p2++;
		}
		else
		{
			diff=*p1-*p2;
		}
		p1++;
		p2++;
	}

	return diff;
}
