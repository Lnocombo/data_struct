#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num = 1;
    int *p = &num , **q = &p;
    if (p == *q) 
    {
        printf("hello\n");
    }
    printf("the address of p is %p: \n",p); // num is address

    printf("the address of p is %p: \n",&p); // p is address
    printf("the address of q is %p: \n",q); // p is address 变量 q 存储的是 指针变量 p 的地址
    printf("the address of q is %p: \n",&(*q)); // p is address

    printf("the address of q is %p: \n",*q); // q is address  指向指针变量 p 存储的地址，即变量 p 存储的值（是一个内存地址）
    printf("the address of q is %p: \n",&(**q)); // num is address

    printf("the address of q is %p: \n",&q); // q is address

    printf("the address of q is %d: \n",**q); // num is value
    printf("the address of num is %p: \n",&num); // num is value
}

/* 
* 运算：取值运算，取地址指向的内存中存储的值，是一个取值运算，值可以内存地址，也可以是某个具体数据类型的值
& 运算：取地址运算
指针的指针存储的是 指针变量的地址
一个 * ：指针变量 p 存储的地址
两个 ** ：指针变量
 */