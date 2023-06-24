//
// Created by mac on 2021/9/16.
//使用自己的函数
#include <stdio.h>
void butler(void);//函数原型

int main(void){
    printf("hello\n");
    butler();//函数调用
    printf("man!");
    return 0;
}
void butler(void){//函数定义
    printf("world\n");
}

