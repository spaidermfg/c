//
// Created by mac on 2021/9/17.
//
#include <stdio.h>

int main(void){
    printf("-------------------第一题---------------------\n");
    //整数上溢下溢
    int upi = 9999999999;
    int downi = -9999999999;
    //浮点数上溢下溢
    float upf = 9.9999999;
    float downf = -9.9999999;
    printf("整数上溢结果: %d\n整数下溢结果: %d\n", upi, downi);
    printf("浮点数上溢结果：%f\n浮点数下溢结果: %f\n", upf, downf);

    printf("-------------------第二题---------------------\n");
    int letter;
    printf("请输入ASCII编码：");
    scanf("%d", &letter);//67---C
    printf("您输入的字符是：%c\n", letter);

    printf("-------------------第三题---------------------\n");
    //警报提示
    printf("\aStarted by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");

    printf("-------------------第四题---------------------\n");
    //打印浮点数
    float num;
    printf("Enter a floating-point value: ");
    scanf("%f", &num);
    printf("小数点形式：%f\n", num);
    printf("指数形式：%e\n", num);
    printf("十六进制记数法：%a\n", num);

    printf("-------------------第五题---------------------\n");
    //打印年龄对应的秒数
    int age;
    printf("请输入您的年龄：");
    scanf("%d", &age);
    printf("您的年龄为%d岁，一共度过了%ld秒！\n", age, age * 31567000);//3.156e7

    printf("-------------------第六题---------------------\n");
    //显示水分子的数量
    int quart;
    long number;
    double x = 3e-23;
    printf("请输入夸脱数：");
    scanf("%d", &quart);
    number = quart * 950 / x;
    printf("一共有%d夸脱水，水分子的数量是: %e\n", quart, number);

    printf("-------------------第七题---------------------\n");
    //英寸转厘米
    int inch;
    printf("请输入您的身高(英寸): ");
    scanf("%d", &inch);
    printf("您的身高为%.2f厘米！\n", inch * 2.54);

    printf("-------------------第八题---------------------\n");
    //提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量
    float cup, pint, ounce, soup, tea;
    printf("请输入杯数：");
    scanf("%f", &cup);//2
    pint = cup / 2;//1
    ounce = cup * 8;//16
    soup = ounce * 2;//32
    tea = soup * 3;//96
    printf("%f杯约等于%f品脱\n", cup, pint);
    printf("%f杯等于%f盎司\n", cup, ounce);
    printf("%f杯等于%f汤勺\n", cup, soup);
    printf("%f杯等于%f茶勺\n", cup, tea);
    return 0;
}
