#include <stdlib.h>
#include <stdio.h>

struct Node{
    int id;
    struct Node *next;
};

struct Node *list = NULL;
struct Node *head_node = NULL;
int id = 1;

void link_create(struct Node *head, int n)
{   
    // head_node = (struct Node *)malloc(sizeof(struct Node));
    for (int i = 0; i < n; i++)
    {
        struct Node *insert_node = (struct Node *)malloc(sizeof(struct Node));
        // printf("value of insert_node is %p\n\n",insert_node);
        insert_node->id = id++;
        head->next = insert_node;
        // printf("head is %p:  value of head->next %p, the id is %d\n",head,head->next,head->id);
        head = insert_node;
        // printf("end %p %p %d \n\n",head,head->next,head->id);
    }
    head->next = NULL;
    // printf("ending %p %p %d \n",head,head->next,head->id);
}

void link_delete(struct Node *list)
{   
    struct Node *tmp = NULL;
    while (list->next != NULL)
    {
        tmp = list->next;
        list = tmp;
        
        // list->next = tmp->next;
        free(tmp);
        tmp = NULL;
        // printf("the list is %p, the tmp is %p\n",list,tmp);
        printf("the list is %p, the tmp is\n",list);
        // printf("the list->next is %d, the tmp->next is %p\n\n",list->id,tmp->next);
        printf("the list->next is %d, the tmp->next is \n\n",list->id);
    }
    list->next = NULL;
    printf("after del %p\n\n",list);
}

void link_query(struct Node *list)
{   
    printf("list is %p, list-next is %p\n\n",list,list->next);
    if (list->next == NULL)
    {
        printf("fuck\n\n");
    }
    while (list->next != NULL)
    {
        list = list->next;
        printf("%p's next address is %p , the value is %d\n\n",list,list->next,list->id);
        // printf("%p 's next address is %p\n\n",list,list->next);
    }
}

int main()
{   
    struct Node *start = (struct Node *)malloc(sizeof(struct Node));
    int number = 10;

    printf("before: value of start is %p\n",start);
    link_create(start, number);
    link_query(start);

    link_delete(start);
    link_query(start);

    printf("after: value of start is %p\n",start);

    return 0;
}