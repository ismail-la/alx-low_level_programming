#include "search_algos.h"
#include <math.h>

/*Remember compiling "math.h" with gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - Function that searches for a value in a sorted array of
 * integers using a jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value:  the value to search for
 *
 * Return: The first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t L, H, Jump_step;

	if (!array || size == 0)
		return (-1);

	Jump_step = sqrt(size);
	for (H = 0; H < size && array[H] < value;
	     L = H, H += Jump_step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       H, array[H]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", L, H);

	for (; L <= min(H, size - 1); L++)
	{
		printf("Value checked array[%lu] = [%d]\n", L, array[L]);
		if (array[L] == value)
			return (L);
	}
	return (-1);
}
