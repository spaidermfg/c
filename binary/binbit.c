//
// Created by mac on 2023/6/24.
//

//位运算
#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);

int main() {
    printf("hellworld");

    char bin_str[CHAR_BIT * sizeof(int) + 1];
    int number;

    puts("Enter integers and see them in binary.");
    while (scanf("%d", &number) == 1)
    {
        itobs(number, bin_str);
        printf("%d is: ", number);
        show_bstr(bin_str);
        putchar('\n');
        number = invert_end(number, 4);
        printf("Inverting the last 4 bits gives:\n");
        show_bstr(itobs(number, bin_str));
        putchar('\n');
    }
    puts("ByeBye!");

    return 0;
}

//十进制转换为2进制
char * itobs(int n, char * ps) {
    int i;
    const static int size = CHAR_BIT * sizeof(int);
    //printf("size: %d", size);

    for (i = size - 1; i >= 0 ; i--, n >>= 1)
    {
        //printf(" |%d %d %d| ", size, i);
       ps[i] = (01 & n) + '0';
    }

    ps[size] = '\0';
    return ps;
}

void show_bstr(const char * str) {
    int i = 0;

    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i]){
            putchar(' ');
        }
    }
}

//切换位操作
//1变为0，0变为1
//掩码设置位1即可
int invert_end(int num, int bits)
{
    int mask = 0;
    int bitval = 1;

    while (bits-- > 0)
    {
        mask |= bitval;
        bitval <<= 1;
    }

    return mask ^ num;
}



