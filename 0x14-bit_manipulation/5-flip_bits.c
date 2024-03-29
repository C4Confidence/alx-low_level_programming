#include "main.h"
/**
 * flip_bits - prints the number of bits needed to flip from one number
 * to another
 * @n: first number to compare
 * @m: the second number to compare
 * Return: the number of bits you would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
