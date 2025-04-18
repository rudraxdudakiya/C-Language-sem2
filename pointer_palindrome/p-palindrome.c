/*
 * stringFunction.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */

#include<stdio.h>
int xstrlen(char *);
void xstrrev(char *s);
int isPalindrome(char *s);
int main()
{
	char s[20];
	printf("Enter the string=");
	scanf("%s",s);
	xstrrev(s);
	printf("Reversed string = %s",s);

	if(isPalindrome(s)==0)
		printf("\nPalindrome String");
	else
		printf("\nNot Palindrome string");
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

void xstrrev(char *s)
{
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
	return ;
}

int isPalindrome(char *s)
{
	char *begin,*end;
	begin=s;
	end=s;

	int flag=0,l;
	l=xstrlen(s);

	for(int i=0;i<l-1;i++)
		end++;
	for(int i=0;i<l/2;i++)
	{
		if(*begin==*end)
		{
			begin++;
			end++;
		}
		else
		{
			flag=1;
			break;
		}
		return flag;
	}

}
