#include <stdio.h>

int main()
{
    int a=10;
    char b='x';
    void * p;
    p=&a;
    printf("*p || a =%d",*(int *)(p));
    p=&b;
    printf("*p || b =%c",*(char *)(p));
    printf("*p || c =%d",*(int *)(p));

    return 0;
}