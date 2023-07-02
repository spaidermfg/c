//
// Created by mac on 2023/7/1.
//
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define RED 1
#define GREEN 2
#define BLUE 4

#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

/* 符号常量 */
#define OPAQUE 0x1 //0001
#define FILL_BLUE 0x8 //1000
#define FILL_GREEN 0x4 //0100
#define FILL_RED 0x2 //0010
#define FILL_MASK 0xE //14: 0001 0100
#define BORDER 0x100 //0001 0000 0000
#define BORDER_BLUE 0x800 //1000 0000 0000
#define BORDER_GREEN 0x400 //0100 0000 0000
#define BORDER_RED 0x200 //0010 0000 0000
#define BORDER_MASK 0xE00
#define B_SOLID 0
#define B_DOTTED 0x1000 //0001 0000 0000 0000
#define B_DASHED 0x2000 //0010 0000 0000 0000
#define STYLE_MASK 0x3000 //0011 0000 0000 0000

const char * colors[8] = {
        "black",
        "red",
        "green",
        "yellow",
        "blue",
        "magenta",
        "cyan",
        "white",
};

struct box_props {
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4;
    bool show_border : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int : 2;
};

/* 联合
 * 只允许初始化第一个成员
 * */
union Views{
    struct box_props st_view;
    unsigned short us_view;
};

void show_settings(const struct box_props * pb);
void show_settings1(unsigned short);
char * itobs(int n, char * ps);

int main(void) {
    //struct box_props box = {true,YELLOW,true,GREEN,DASHED,};
    /* 创建union联合 */
    union Views box = {
            {
                true,
                YELLOW,
                true,
                GREEN,
                DASHED,
            }
    };
    char bin_str[8 * sizeof(unsigned int) + 1];

    printf("Original box settings:\n");
    show_settings(&box.st_view);

    box.st_view.opaque = false;
    box.st_view.fill_color = WHITE;
    box.st_view.border_color = MAGENTA;
    box.st_view.border_style = SOLID;
    printf("\nModified box settings: \n");
    show_settings(&box.st_view);

    printf("\nBox settings using unsigned int view:\n");
    show_settings1(box.us_view);

    printf("bits(%s) are %s\n", bin_str, itobs(box.us_view, bin_str));
    box.us_view &= ~FILL_MASK; /* 清零填充色的位 */
    box.us_view |= (FILL_BLUE | FILL_GREEN); /* 重制填充色 */
    box.us_view ^= OPAQUE; /* 切换是否透明的位 */
    box.us_view |= BORDER_RED;
    box.us_view &=  ~STYLE_MASK;  //把表示风格的位清零
    box.us_view |= B_DOTTED;

    printf("\nModified box after settings:\n");
    show_settings(&box.st_view);
    printf("\nBox settings using unsigned int after views:\n");
    show_settings1(box.us_view);
    printf("bits(%s) are %s\n", bin_str, itobs(box.us_view, bin_str));

    return 0;
}

void show_settings(const struct box_props * pb)
{
    printf("    Box is %s.\n", pb->opaque == true ? "opaque" : "transparent");
    printf("    The fill color is %s.\n", colors[pb->fill_color]);
    printf("    Border %s.\n", pb->show_border == true ? "shown" : "not shown");
    printf("    The border color is %s.\n", colors[pb->border_color]);
    printf("    The border style is ");
    switch (pb->border_style) {
        case SOLID:
            printf("solid.\n");
            break;
        case DOTTED:
            printf("dolled.\n");
            break;
        case DASHED:
            printf("dashed.\n");
            break;
        default:
            printf("unknown type.\n");
    }
}


void show_settings1(unsigned short us)
{
    printf("    Box is %s.\n", (us & OPAQUE) == OPAQUE ? "opaque" : "transparent");
    printf("    The fill color is %s.\n", colors[(us >> 1) & 07]); // 右移运算符
    printf("    Border %s.\n", (us & BORDER) == BORDER ? "shown" : "not shown");
    printf("    The border color is %s.\n", colors[(us >> 9) & 07]);
    printf("    The border style is ");
    switch (us & STYLE_MASK) {
        case B_SOLID:
            printf("solid.\n");
            break;
        case B_DOTTED:
            printf("dolled.\n");
            break;
        case B_DASHED:
            printf("dashed.\n");
            break;
        default:
            printf("unknown type.\n");
    }
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i  >= 0 ; i--, n >>= 1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';

    return ps;
}