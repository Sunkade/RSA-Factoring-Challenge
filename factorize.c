#include "factor.h"

/**
 * factorize - Factorize a number and print its prime factors.
 * @buffer: Pointer to the address of the number as a string.
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int factorize(char *buffer)
{
    u_int32_t num;
    u_int32_t i;

    num = atoi(buffer);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d = %d * %d\n", num, num / i, i);
            break;
        }
    }

    return 0;
}

