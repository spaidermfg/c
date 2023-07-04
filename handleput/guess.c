//
// Created by mac on 2023/7/4.
//
#include <stdio.h>

int main(void)
{
    int guess = 1;
    printf("Pick the integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess right and with\n");
    printf("an n if it is wrong.\n");
    printf("Oh...is your number %d?\n", guess);

    char response;

    while ((response = getchar()) != 'y')
    {
        if (response == 'n') {
            printf("Well, then, is it %d?\n", ++guess);
        } else {
            printf("Sorry, I understand only y or n.\n");
        }

        //丢弃末尾的换行符
        while (getchar() != '\n')
        {
            continue;
        }
    }

    printf("I knew could do it.");
    return 0;
}
