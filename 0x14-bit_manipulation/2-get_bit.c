#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index in a
 * decimal number
 * @n: number to get the bit from
 * @index: index of the bit to get.
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{

		if (index > 63)
			return (-1);

		return ((n >> index) & 1);
}
