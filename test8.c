//逻辑运算符
#include <stdio.h>
int main()
{
    int a=10;
    int b=20;
    
    if(a && b)//a与b，两个都成立即为真
    {
        printf("A  a&&b为真\n");
    }
    if(a || b)//a或b,其中一个成立即为真
    {
        printf("B  a||b为真\n");
    }

    a = 0;
    b = 10;

    if(a && b)
    {
        printf("C  a&&b为真\n");
    }
    else
    {
        printf("D  a&&b为假\n");
    }
    if(!(a&&b))//"!"逻辑非运算符，逆转操作数的状态，如果条件为真，则逻辑非运算为假
    {
        printf("E  !(a&&b)为真");
    }
}
