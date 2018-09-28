#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int id;
    struct Node *next;
};

struct Node *lists = NULL;

// struct Node *opt_node = NULL;

struct Node *head_node = NULL;

int number = 1;

void list_create(struct Node *insert_node)
{   
    
    insert_node->id = number++;
    // printf("插入节点变量内存地址：%p\n",&insert_node);
    // printf("插入节点变量中存储的内存地址：%p\n",insert_node);

    head_node->next = insert_node; // 插入节点（insert_node 为改节点的内存地址）
    insert_node->next = NULL; // 终端节点指针域为空，NULL

    // printf("head is %p, next is %p, head's value %d, next's value %d\n\n",head_node,insert_node,head_node->id,insert_node->id );
    head_node = insert_node; // 如果有下一个节点，将要插入的位置
    // free(insert_node);
}

void list_print(struct Node *head)
{
    struct Node *tmp = NULL;
    tmp = head->next;
    // printf("the node's address is %p, the value is %d\n",tmp->next,tmp->id);
    while(tmp != NULL)
    {   
        printf("the node's address is %p, the value is %d\n",tmp,tmp->id);
        tmp = tmp->next;
    }

}

void list_destory(struct Node *head)
{
    
}

int main ()
{

    lists = (struct Node *)malloc(sizeof(struct Node));
    head_node = lists;
    printf("the start %p\n",lists);

    for (int i = 0; i < 10; i++)
    {
        struct Node *opt_node = (struct Node *)malloc(sizeof(struct Node));
        list_create(opt_node);
    }

    // list_print(lists);
    // printf("the start %p\n",lists);

    return 0;

}