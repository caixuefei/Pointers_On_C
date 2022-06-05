/*
* File:     ch04/break_continue.c  
* Author:   cai
* Page:     54
* Date:     2022-06-04
*/

#include <stdio.h>

int main()
{
    int ind = 0;
    while(ind <5)
    {
        if(ind % 2 ==1)
            break;
        printf("%d\n", ind);
        ind++;
    }
    printf("\n");

    return 0;
}