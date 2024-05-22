#include "search_algos.h"

/**
 * binary_search - binary search for a value in sorted array.
 * @array: pointer to first element in array to search in.
 * @size: size of array to search in.
 * @value: value to search for in array.
 *
 * Return: On success, index of value found in array. Otherwise, -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
