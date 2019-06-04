#include <stdio.h>
#include "rand.h"

void dump(unsigned char buf, size_t sz)
{
    for (int i=0; i<sz; i++)
        printf("%x", i);
    printf("¥n")
}

int main(void)
{
    unsigned int seed = 1;
    unsigned char buf[256];
    
    for (int i = 0; i<sizeof(buf); i++) {
        buf[i] = (unsigned int)getrand(&seed, 0, 255);
    }

    dump(buf, sizeof(buf));

    return 1;
}
