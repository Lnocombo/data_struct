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

// head node
struct Node *head = NULL;

struct Node *node = NULL;

static int id = 1;


// create a linklist
void link_add(struct Node *insertnode, struct Node *lists)
{   
    insertnode->id = id++;
    lists->next = insertnode;
    lists = insertnode;
    printf("the address is %p, the value is %d\n",lists->next,lists->next->id);
}

// delete a node in linklist
void link_del()
{

}

// print the detail about linklist
void link_print(struct Node *head)
{   
    struct Node *tmp;
    for (int j = 0; j <= 10; j++)
    {
        tmp = head;
        head = head->next;
        printf("the value of node is %d the address is %p\n",tmp->id,tmp);

    }
}

int main()
{

    lists = (struct Node *)malloc(sizeof(struct Node));
    for (int i = 0; i < 10; i++)
    {
        node = (struct Node *)malloc(sizeof(struct Node));
        link_add(node, lists);
    }

    return 0;
}
