#include <stdio.h>

extern int num;
void write_extern(void){
    printf("num=%d\n",num);
}