#include "main.h"
/**
 * get_endianness - function that checks endianess
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&x)[0]);
	return (little_or_big);
}
