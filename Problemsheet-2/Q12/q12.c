/*
 * q12.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */


#include <stdio.h>

void rev(char *);
int xstrlen(char *);

int main()
{
	char s[20];
	printf("Enter the string=");
	scanf("%s",s);
	rev(s);
	printf("Reversed string= %s",s);

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

void rev(char *s)
{
	/*
	int c,length;
	char *begin,*end,temp;
	begin=s;
	end=s;
	length=xstrlen(s);
	for(c=0;c<length-1;c++)
		end++;
	for(c=0;c<length/2;c++)
	{
		temp=*begin;
		*begin=*end;
		*end=temp;
		end--;
		begin++;
	}
	 */
	int n=xstrlen(s);
	char temp;
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=temp;
	}
	return ;
}
