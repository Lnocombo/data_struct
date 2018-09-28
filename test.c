#include <stdio.h>
#include <stdlib.h>


struct node
{
    int id;
    int *p;
};
int num = 1;
int main()
{
    struct node *s = (struct node *)malloc(sizeof(struct node));
    // (*s).id = id++;

    s->id = num++;
    printf("the address of s is %p\n",&s);
    printf("the value of id is %p\n",s);
    printf("the value of p is %p\n",s->p);
    // printf("the address of id is %p\n",s);
    // printf("the address of id is %p\n",&s);
    return 0;
}