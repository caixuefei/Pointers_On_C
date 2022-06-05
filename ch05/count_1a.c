/*
* File:     ch05/count_1a.c  
* Author:   cai
* Page:     69
* Date:     2022-06-05
*/

#include <stdio.h>

int count_one_bits(unsigned value)
{
    int ones;
    for(ones = 0; value != 0; value = value >> 1)
    {
        if(value %2 != 0)
            ones++;
    }

    return ones;
}