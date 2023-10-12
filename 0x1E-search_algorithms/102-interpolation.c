#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in a sorted array
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, Low, R;

	if (array == NULL)
		return (-1);

	for (Low = 0, R = size - 1; R >= Low;)
	{
		x = Low + (((double)(R - Low) / (array[R] - array[Low])) * (value - array[Low]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			R = x - 1;
		else
			Low = x + 1;
	}
	return (-1);
}
