#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    struct node *next;
};

int main ()
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = NULL;
    
    p->id = 2;
    q = p;
    free(p);
    p = NULL;

    printf("p value is %p, p address is %p\n",p,&p);
    printf("q value is %p, q address is %p\n",q,&q);
    printf("q->id value is %d, q address is %p\n",q->id,&q);
    return 0;
}