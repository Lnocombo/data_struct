#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// malloc 函数：分配内存成功，返回指向被分配内存的地址的指针，否则返回空指针 NULL

int main() {
    char *str;
    int num, *p,*q;
    q = (int *)malloc(1);
    q = &num;
    num = 3;
    p = &num;
    str = (char *)malloc(sizeof(char) * 2);
    strcpy(str, "runoobrunoobrunoobrunoobrunoobrunoob");
    printf("String=%s, Address=%p\n",str,str);
    printf("the value is %d the address is %p\n",*p,p);
    printf("the value is %d the address is %p\n",*q,q);

    return 0;
}