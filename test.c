#include<stdio.h>
#include<float.h>
int main()
{
    printf("int存储大小: %lu \n", sizeof(int));
    printf("float存储大小: %lu \n",sizeof(float));
    printf("float最大值: %E\n",FLT_MAX);
    printf("float最小值: %E\n",FLT_MIN);
    printf("精度值：%d\n",FLT_DIG);

    float a = 3.5;//type variable_name = value;
    int b;//type variable_name;
    b = a;//数据类型转换
    printf("%d \n",b);
    return 0;
}