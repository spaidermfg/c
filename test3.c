//语言常量
/*
两种定义常量的方法：
    1.使用#define预处理器；
    2.使用const关键字
*/
#include <stdio.h>
 
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
int hello(){
    int a;
    a = LENGTH * WIDTH;
    return a;
}
int world(){
    const int LENG =10;
    const int HEIGHT = 6;
    int b = LENG*HEIGHT;
    return b;
}
int main()
{
   int area,result;  
  
   area = hello();
   result=world();
   printf("value of area : %d \n", area);
   printf("result= %d \n",result);
   printf("%c", NEWLINE);
   return 0;
}