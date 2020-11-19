#include <stdio.h>

int num;
extern void write_extern();

int main(){
    num=5;
    write_extern();
}