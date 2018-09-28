#include <stdio.h>
#include <stdlib.h>

// 节点数据结构
struct Node
{
    int id;
    struct Node *next; 
};

// LinkList
struct Node *lists = NULL;

// head node
struct Node *head = NULL;

struct Node *node = NULL;

static int id = 1;


// create a linklist
void link_add(struct Node *insertnode, struct Node *lists)
{   
    insertnode->id = id++;

    // insertnode->next = lists->next;
    // lists->next = insertnode;
    lists->next = insertnode;
    printf("*lists is %p\n",lists);
    lists = insertnode;
    // printf("the value is %p,%d\n",head,head->id);
    // printf("the address is %p, the forward pointer is %p ,the value is %d\n",&lists,lists,lists->id);
}

// print the detail about linklist
void link_print(struct Node *head)
{   
    struct Node *tmp = NULL;
    // tmp = (struct Node *)malloc(sizeof(struct Node));

    for (int j = 0; j < 10; j++)
    {
        tmp = head;
        head = head->next;
        printf("node is %d the address is %p\n",tmp->id,tmp);
    }
}

int main()
{

    lists = (struct Node *)malloc(sizeof(struct Node));
    head = lists;
    printf("before address: %p, address of lists is %p\n",head,&lists);

    for (int i = 0; i < 10; i++)
    {
        node = (struct Node *)malloc(sizeof(struct Node));
        link_add(node, lists);
    }

    printf("after address: %p, address of lists is %p\n",head,&lists);

    // link_print(head);

    return 0;
}
