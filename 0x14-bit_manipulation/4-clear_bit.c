
#include "main.h"

/**
 * clear_bit - the value of a bit, set to a given bit to 0
 * @n: A pointer that change the number to
 * @index: An index that clears a bit
 *
 * Return: 1 just success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

