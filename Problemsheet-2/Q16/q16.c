/*
 * q16.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include<stdio.h>
int countvowel(char *);

int main()
{
	char str[30];

	printf("Enter the string = ");
	scanf("%s",str);

	printf("\n Total vowel in the string = %d",countvowel(str));

	return 0;
}

int countvowel(char *p)
{
	int v=0;

	while(*p!='\0')
	{
		if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
		{
			v++;
		}
		p++;
	}

	return v;
}
