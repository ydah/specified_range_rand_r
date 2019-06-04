/*
 * @file rand.c
 * @brief  Range specification rand_r()
 */

#include <stdlib.h>
#include "rand.h"

int getrand(unsigned int* seed, int min, int max)
{
    return min + (int)(rand_r(seed) * (max - min + 1.0) / (1.0 + RAND_MAX));
}