//
// Created by mac on 2021/9/16.
//
#include <stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);

int main(void){

    printf("-------------------第一题---------------------\n");
    printf("漩涡 鸣人\n");
    printf("漩涡\n鸣人\n");
    printf("漩涡 ");
    printf("鸣人\n");

    printf("-------------------第二题---------------------\n");
    printf("姓名：漩涡鸣人\n家庭住址：木叶村\n");

    printf("-------------------第三题---------------------\n");
    int age, year;
    age = 17;
    year = 360 * age;
    printf("年龄：%d岁\n天数：%d天\n", age, year);

    printf("-------------------第四题---------------------\n");
    jolly();
    deny();

    printf("-------------------第五题---------------------\n");
    br();
    printf(",");
    ic();
    ic();
    br();

    printf("\n-------------------第六题---------------------\n");
    int toes = 10, toes2, toes22;
    toes2 = toes * 2;
    toes22 = toes * toes;
    printf("toes的值为：%d\ntoes的二倍为：%d\ntoes的平方为：%d\n", toes, toes2, toes22);

    printf("-------------------第七题---------------------\n");
    smile();smile();smile();
    printf("\n");
    smile();smile();
    printf("\n");
    smile();

    printf("\n-------------------第八题---------------------\n");
    printf("starting now: ");
    one_three();
    two();
    printf("donw!");
    printf("\n---------------------end---------------------\n");

    return 0;
}
void jolly(void){
    for (int i = 0; i < 3; i++){
        printf("For he's a jolly good fellow!\n");
    }
}
void deny(void){
    printf("Which nobody can deny!\n");
}
void br(void){
    printf("Brazil, Russia");
}
void ic(void){
    printf("India, China\n");
}
void smile(void){
    printf("Smile!");
}
void one_three(void){
    printf("one\n");
}
void two(void){
    printf("two\nthree\n");
}