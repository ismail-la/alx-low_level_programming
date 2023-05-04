#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of the binary number.
 *
 * Return: the unsigned int converted number
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int res_val = 0;

    if (b == NULL)
        return (0);

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        res_val = res_val * 2 + (b[i] - '0');
    }

    return (res_val);
}
