#include <stdio.h>//算术运算符
int main()
{
    int a=10;
    int b =20;
    int c;

    c = a + b;
    printf("a+b=%d\n",c);
    c = a * b;
    printf("a*b=%d\n",c);
    c = a - b;
    printf("a-b=%d\n",c);
    c = a / b;
    printf("a/b=%d\n",c);
    c = a % b;
    printf("a模b=%d\n",c);
    c = a++;
    printf("a++=%d\n",c);
    c = a--;
    printf("a--=%d\n",c);


}