#include "main.h"

/**
 * flip_bits - returns counts the number of bits you need to flip
 * to get from one number to another
 * @n: first number one
 * @m: second number two.
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned int count_bits;

		for (count_bits = 0; n || m; n >>= 1, m >>= 1)
		{
			if ((n & 1) != (m & 1))
				count_bits++;
		}

		return (count_bits);
}
