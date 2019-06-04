/*
 * @file rand.c
 * @brief  sample code for range specification rand_r()
 */

#include <stdio.h>
#include "rand.h"

void dump(unsigned char* buf, size_t sz)
{
    for (int i=0; i<sz; i++)
        printf("%d\n", buf[i]);
}

int main(void)
{
    unsigned int seed = 0;
    unsigned char buf[256];

    for (int i = 0; i<sizeof(buf); i++)
        buf[i] = (unsigned char)getrand(&seed, 0, 255);

    dump(buf, sizeof(buf));

    return 1;
}
