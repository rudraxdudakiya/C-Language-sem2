#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrsize ,sum=0;
    printf("Total array allement will be ");
    scanf("%d" ,&arrsize);
    int *p;
    p=(int *)calloc(arrsize,sizeof(int));
    if(p==NULL)
        exit(-1);
    printf("values\n");
    for(int i=0;i<arrsize;i++)
        scanf("%d" ,p+i);
    for(int i=0;i<arrsize;i++)
    {
        printf("%d\t",*(p+i));
        sum += *(p+i);
    }
    printf("\nsum =%d",sum);
    free(p);
    return 0;
}