#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p=(int *)malloc(3*sizeof(int));
    printf("Enter 3 integers");
    scanf("%d%d%d",p,p+1,p+2);
    printf("\n%d %d %d\n %u %u %u",*p,*(p+1),*(p+2),p,p+1,p+2);
    printf("Error");
    scanf("%d",p+4);
    printf("%d %u",*(p+4),p+4);

    p=realloc(p,5*sizeof(int));
    return 0;
}