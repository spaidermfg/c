//
// Created by mac on 2021/9/22.
//
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NUM 67
#define PRAISE "Yield contains!"//c预处理器，定义常量
#define BOOK "War and Peace"
int main(void){
    char ch[40];//派生类型
    const double RENT = 38.87;
    scanf("%s", ch);//只会读一个单词，遇到空格便会停止
    printf("%s %s\n", ch, PRAISE);
    printf("%zd,%zd\n", strlen(ch), sizeof ch);
    printf("%zd,%zd\n", strlen(PRAISE), sizeof(PRAISE));
    printf("%d,%ld\n", INT_MAX, LONG_MAX);
    printf("-------------------\n");
    printf("*%d*\n", NUM);
    printf("*%2d*\n", NUM);
    printf("*%10d*\n", NUM);
    printf("*%-10d*\n", NUM);
    printf("-------------------\n");
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);//指定小数点左右侧的位数
    printf("*%3.1f*\n", RENT);//*38.9*
    printf("*%10.3f*\n", RENT);//*    38.870*
    printf("*%10.3E*\n", RENT);//* 3.887E+01*
    printf("*%010.2f*\n", RENT);//*0000038.87*
    printf("-------------------\n");
    printf("%x %X %#x\n", NUM, NUM, NUM);//十六进制
    printf("%d, *% d\n", NUM, NUM);//生成前导空格
    printf("-------------------\n");
    printf("[%2s]\n", PRAISE);//表示可容纳字符串中搜有字符
    printf("[%24s]\n", PRAISE);
    printf("[%24.5s]\n", PRAISE);//.5表示只显示5个字符
    printf("[%-24.5s]\n", PRAISE);//-代表文本左对齐输出
    printf("-------------------\n");
    char name[10] = "Mark";
    float cash = 6.70;
    printf("The %s family just may be $%.2f dollars richer!\n", name,cash);
    printf("-------------------\n");
    printf("Hello, young lovers, wherever you are.\n");
    printf("hello, young "     "lovers"
                               ", wherever you are.\n");
    printf("hello, young lovers"
           ", whereever you are.\n");
    printf("-------------------\n");
    printf("%*d\n", 5, 100);//* = 5;
    printf("%5d\n", 100);
    printf("-------------------\n");
    //4.7.5复习题
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f of list.", BOOK, cost, percent);

    return 0;
}