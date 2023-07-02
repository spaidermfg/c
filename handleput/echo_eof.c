//
// Created by mac on 2023/7/2.
//
#include <stdio.h>

int main(void)
{
    /* EOF 读到文件结尾，值为-1
     * 可以将键盘输入作为一个文件处理
     * 判断文件结尾的方式：
     *    文件的大小
     *    特殊字符Ctrl+或Ctrl+D
     * 该缓冲区属于行缓冲区 */
    int ch;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}

