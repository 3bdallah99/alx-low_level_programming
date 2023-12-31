#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int v = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	v = ~(v << index);
	*n = *n & v;

	return (1);
}
