#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index to be set
 * @n: pointer to the number
 * Return: 1 if successful, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
