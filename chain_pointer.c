#include <stdio.h>
int main()
{
    int a=10;
    int *p1;
    int **p2;
    int ***p3;

    p1=&a;
    p2=&p1;
    p3=&p2;

    printf("a=%d address=%u\n",a,&a);
    printf("*p1=%d address=%u\n",*p1,p1);
    printf("*p2=%d address=%u\n",**p2,p2);
    printf("*p3=%d address=%u\n",***p3,p3);

    printf("Size of p1,p2,p3 = %d %d %d",sizeof(p1),sizeof(p2),sizeof(p3));
    return 0;
}