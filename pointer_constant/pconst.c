/*
 * pconst.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int main()
{
	char *p="hello";
	*p='M';
	p="bye";

	const char *q="hello";//string is constant & pointer
	*q='M';
	q='bye';

	char const *s="hello";//string is constant & pointer
	*s='M';
	s='bye';

	char * const t="hello";//variable is constant,pointer is string
	*t='M';
	t='bye';

	const char * const u="hello";//string is constant,pointer is constant;
	*u='M';
	u="bye";

	return 0;
}
