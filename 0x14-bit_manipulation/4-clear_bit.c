#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * at a given index.
 * @n: pointer to unsigned long int number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned int b;

		if (index > 63)
			return (-1);

		b = 1 << index;

		if (*n & b)
			*n ^= b;

		return (1);
}
