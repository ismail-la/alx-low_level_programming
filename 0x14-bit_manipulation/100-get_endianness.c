#include "main.h"

/**
 * get_endianness - a function that checks if a machine is little
 * or big endian.
 * Return: 0 for big, 1 for little ndian
 */
int get_endianness(void)
{
		unsigned int j = 1;
		char *c = (char *) &j;

		return (*c);
}
