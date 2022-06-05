/*
* File:     ch05/bad_exp.c  
* Author:   cai
* Page:     84
* Date:     2022-06-05
*/

int main(void)
{
    int i = 10;

    i = i-- - --i * (i = -3) * i++ + ++i;
    printf("i = %d\n", i);
    return 0;
}