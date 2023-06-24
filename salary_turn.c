//
// Created by mac on 2021/9/17.
//
#include <stdio.h>
int main(void){

    float salary;
    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\n\t$%f a month is $%f a year.", salary, salary * 12.0);
    printf("\rGee!\n");
    return 0;
}