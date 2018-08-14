#include <stdio.h>
#include <stdlib.h>

// 节点数据结构
struct Node
{
    int id; // 数据域信息
    int data; // 数据域信息
    struct Node *next; // 指针域（指向直接后继元素）
};

// LinkList
struct Node *lists = NULL;

// LinkList head node
struct Node *head = NULL;

struct Node *node = NULL;

static int id = 1;

int main()
{
    lists = (struct Node *)malloc(sizeof(struct Node));
    head = lists;

    // 加上头结点一共有 11 个节点
    for (int i = 0; i < 10; i++) 
    {
        node = (struct Node *)malloc(sizeof(struct Node)); // 分配新的内存，存储链表元素 node
        // printf("the address is %p\n",node);
        // printf("the address lists %p\n",lists);
        node->id = id++;

        // 头插法（lists 的指向的内存地址不变）
        node->next = lists->next;
        lists->next = node;

    }

    // 打印链表元素数据，不包含头结点
    for (int j = 0; j < 10; j++)
    {
        struct Node *tmp;
        tmp = head->next;
        head = head->next;
        printf("the value of index %d is %d the address is %p\n",j,tmp->id,tmp);
    }

    return 0;
}

/* 
   指针变量 *p
   p: 指针变量中存储的地址
   &p: 指针变量的地址
   *p: 指针变量存储的地址指向的值
 */
/* 
    头插法：
        s->next = head_->next; 
        head->next = s;
    尾插法：
        head->next = s;
        head = s;
 */