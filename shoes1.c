//
// Created by mac on 2021/10/18.
//
#include <stdio.h>
#define ADJUST 7.31//定义符号常量
int main(void){

    const double SCALE = 0.333;//限定符创建在程序运行过程中不可更改的变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
    return 0;

}