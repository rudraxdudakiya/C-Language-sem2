/*
 * stringFunction.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int xstrlen(char *);
void xstrcpy(char *,char*);
void xstrcat(char *,char *);
int xstrcmp(char *,char *);
int main()
{
	char str1[20]="vnsgu",str2[20],str3[20]="MSCIt",str4[20]="MSCiT";

	int length=0;
	length=xstrlen(str1);
	printf("Length of str1= %d",length);
	length=xstrlen(str3);
	printf("\tLength of str3= %d",length);
	length=xstrlen(str4);
	printf("\tLength of str4= %d",length);

	xstrcpy(str2,str1);
	printf("\nStr 2=%s",str2);

	xstrcat(str1,str3);
	printf("\nStr 1=%s",str1);

	if(xstrcmp(str4,str3)==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are different =%d",xstrcmp(str3,str4));
	}

	return 0;
}
int xstrlen(char *p)
{
	int length=0;
	while(*p != '\0')
	{
		p++;
		length++;
	}
	return length;
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
