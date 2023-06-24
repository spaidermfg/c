//
// Created by mac on 2021/9/17.
//
//有符号数signed和无符号数unsigned打印
//交易流水匹配牌识流水，牌识流水取图片，时间匹配牌识流水
#include <stdio.h>
int main(void){
    float aboat = 32000.00;
    double dou = 2.14e9;
    long double ld = 5.32e-5;

    _Bool flag = 0;//1true,0flase

    unsigned int  ui = 3000000000;
    short bug= 200;
    long big = 65537;
    long long big2 = 1234567894234;
    printf("ui = %u not %d\n", ui, ui);
    printf("short = %hd is %d\n", bug, bug);
    printf("long big = %ld not %hd\n", big, big);
    printf("long2 big2 = %lld not %ld \n", big2, big2);

    printf("aboat = %f is aboat1 = %e\n", aboat, aboat);
    printf("dou = %f is dou1 = %e\n", dou, dou);
    printf("ld = %Lf is ld1 = %Le is ld2 = %La\n", ld, ld, ld);

    //sizeof()，以字节为单位返回数据类型大小
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type unsigned int has a size of %zd bytes.\n", sizeof(unsigned int));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));

    return 0;
}