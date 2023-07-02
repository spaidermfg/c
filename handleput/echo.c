//
// Created by mac on 2023/7/2.
//
#include <stdio.h>

int main(void)
{
    char ch;

    /* 有缓冲输入 */
    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }
    return 0;
}
