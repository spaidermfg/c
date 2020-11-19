#include <stdio.h>//关系运算符
int main()
{
    int a = 10;
    int b = 20;
    int c;

    if(a==b)
    {
        printf("A  a=b\n");
    }
    else
    {
        printf("B  a!=b\n");
    }
    if(a<b)
    {
        printf("C  a<b\n");
    }
    else
    {
        printf("D  a不小于b\n");
    }
    if(a>b)
    {
        printf("E  a>b\n");
    }
    else
    {
        printf("F  a不大于b\n");
    }
    if(a<=b)
    {
        printf("G  a<=b\n");
    }
    if(b>=a)
    {
        printf("H  b>=a\n");
    }
    if(a!=b)
    {
        printf("I  a不等于b\n");
    }
    
    
    
}