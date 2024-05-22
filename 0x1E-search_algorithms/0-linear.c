#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using Linear
 * @array: The array to search in.
 * @size: The size of array.
 * @value: The value to search for.
 *
 * Return: On success the index of the value searched for.
 *         Otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
