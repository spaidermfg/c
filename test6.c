#include <stdio.h>
int main()
{
    int a = 10;
    int b;

    b = a++;//先赋值再运算
    printf("b的值 = %d\n",b);//10
    printf("a的值 = %d\n",a);//11

    a = 10;
    b = ++a;//先运算再赋值
    printf("b的值 = %d\n",b);//11
    printf("a的值 = %d\n",a);//11
    

}