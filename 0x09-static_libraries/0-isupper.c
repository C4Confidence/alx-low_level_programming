#include "main.h"
/**
 * _isupper - uppercase letters
 * @C: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}
