
/*
int a;//声明并且定义变量，建立存储空间
extern int b;//声明，但不是定义，不需要建立存储空间
*/
#include <stdio.h>
//函数外定义变量i，j
int i,j;
int addtown(){

    //函数内声明变量i和j为外部变量
    extern int i,j;
    //给外部变量赋值
    i = 3;
    j = 5;
    return i*j;
}
int main()
{
   int result;
   result = addtown();
   printf("result为: %d",result);
   return 0;
}