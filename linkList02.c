#include <stdio.h>
#include <stdlib.h>

// 节点数据结构
struct Node
{
    int id; // 数据域信息
    struct Node *next; // 指针域（指向直接后继元素）
};

// LinkList
struct Node *lists = NULL;

// LinkList
struct Node *head = NULL;

struct Node *node = NULL;

static int id = 1;

int main()
{
    lists = (struct Node*)malloc(sizeof(struct Node));
    head = lists;

    // 加上头结点一共有 11 个节点
    for (int i = 0; i < 10; i++) 
    {
        node = (struct Node*)malloc(sizeof(struct Node)); // 分配新的内存，存储链表元素 node
        node->id = id++;

        // 尾插发（lists 和 node 指向的内存地址一直改变）
        lists->next = node;
        lists = node;
    }

    // 打印链表元素数据，不包含头结点
    for (int j = 0; j <= 10; j++)
    {
        struct Node * tmp;
        tmp = head;
        printf("the value of index %d is %d the address is %p\n",j,tmp->id,tmp);
        head = head->next;
    }


    return 0;
}