//
// Created by mac on 2021/9/17.
//
//输出十进制，0八进制，0x十六进制数
//int,unsigned int,long,unsigned long, long long,unsigned long long
#include <stdio.h>
int main(void){
    unsigned j = 67;//0~65535,只适用与非负数场合
    unsigned long long u = 8999999;
    int i = 67;
    printf("十进制：%d\n八进制：%o\n十六进制：%x\n",i, j, i);
    printf("--------------\n");
    printf("十进制：%d\n八进制：%#o\n十六进制：%#x\n",i, i, i);//带前缀
    return 0;
}
