/*
 * @file rand.c
 * @brief  sample code for range specification rand_r()
 */

#include <stdio.h>
#include <limits.h>
#include "rand.h"

int main(void)
{
    unsigned int seed = 1;
    unsigned char buf[256];

    for (int i = 0; i<sizeof(buf); i++)
        printf("%d\n", (unsigned char)getrand(&seed, 0, UCHAR_MAX));

    return 1;
}
