//
// Created by mac on 2023/7/4.
//
#include <stdio.h>

/* 接收用户输入，一个字符和两个数值， 打印几行几列的字符*/
void display(char cr, int lines, int width);

int main(void)
{

    int ch;
    int rows, cols;
    printf("Enter a character and two integers: \n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
        {
            break;
        }

        display(ch, rows, cols);

        while (getchar() != '\n')
        {
            continue;
        }
        printf("Enter another character and two integers;\n");
        printf("Enter a new line to quit.\n");
    }

    printf("Good bye.");
    return 0;
}


void display(char cr, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(cr);
        }
        putchar('\n');
    }
}
