#include <stdio.h>

void fun1(void);//函数声明
static int area=10;//static存储类修饰全局变量

 int main(){
     while (area--)
     {
         /* code */
         fun1();
     }
     return 0;
 }
 void fun1(void){//调用函数fun1
     static int result=5;
     result++;
     printf("result=%d, area=%d\n", result, area);
 }