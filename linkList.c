#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

// 节点数据结构
struct Node
{
    int id;
    int data; // 数据域信息
    struct Node *next; // 指针域（指向直接后继元素）
};

// LinkList
struct Node *lists = NULL;

// 
struct Node *node = NULL;

// LinkList
struct Node *head = NULL;

static int id = 1;

int main()
{
    // lists = (struct Node*)malloc(sizeof(struct Node));
    lists = (struct Node*)malloc(sizeof(struct Node));
    head = lists;

    // 加上头结点一共有 11 个节点
    for (int i = 0; i < 10; i++) 
    {
        node = (struct Node*)malloc(sizeof(struct Node)); // 分配新的内存，存储链表元素 p
        printf("the address is %p\n",node);
        printf("the address lists %p\n",lists);
        node->id = id++;

        // 头插法
        // node->next = lists->next;
        // lists->next = node;

        // 尾插发
        lists->next = node;
        lists = node;
    }

    // 打印链表元素数据，不包含头结点
    /* for (int j = 0; j < 10; j++)
    {
        struct Node *tmp;
        tmp = lists->next;
        printf("the value of index %d is %d the address is %p\n",j,tmp->id,tmp);
        lists = lists->next;
    } */

    for (int j = 0; j <= 10; j++)
    {
        struct Node *tmp;
        tmp = head;
        printf("the value of index %d is %d the address is %p\n",j,tmp->id,tmp);
        head = head->next;
    }


    return 0;
}