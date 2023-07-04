//
// Created by mac on 2023/7/4.
//
#include <stdio.h>
#include <stdlib.h>

/* 打开一个文件并显示该文件 */
int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];

    printf("Enter he name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Failed to open file: %s, Bye\n", fname);
        return 0;
    }

    //getc()从文件中获取一个字符
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
