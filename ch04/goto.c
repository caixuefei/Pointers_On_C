/*
* File:     ch04/goto.c  
* Author:   cai
* Page:     61
* Date:     2022-06-05
*/

#include <stdio.h>

int main(void)
{
    int i = 10;
    add:
        i += 20;

    if(i == 10)
        goto add;
    printf("%d\n", i);
    return 0;
}