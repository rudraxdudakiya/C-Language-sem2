#include<stdio.h>
#include<stdlib.h>

struct stud
{
    int rno;
    char name[20];
    float per;
};

void input(struct stud *s)
{
    printf("Enter rollno,name and per:");
    scanf("%d%s%f",&s->rno,s->name,&s->per);
}
void print(struct stud *s)
{
    printf("%d\t%s\t%.2f\n" ,s->rno,s->name,s->per);
}
int main()
{
    int n;

    printf("Enter the size:");
    scanf("%d" ,&n);

    struct stud *s;

    s=(struct stud*) calloc(n,sizeof(struct stud));

        for(int i=0;i<n;i++)
        {
            input(s+i);
        }

        for(int i=0;i<n;i++)
        {
            print(s+i);
        }

    free(s);
    return 0;
}