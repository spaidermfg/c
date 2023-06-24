//
// Created by mac on 2021/9/22.
//
#include <stdio.h>
#define PI 3.1415926
int main(void){
    float area, circum, radius;
    printf("Please input radius：");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("area = %1.2f\ncircum = %1.2f", area, circum);
    return 0;
}
