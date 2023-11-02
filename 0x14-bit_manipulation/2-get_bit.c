#include "main.h"

/**
 * get_bit - the value of a bit of index in a decimal number to be return
 * @n: search for index or number
 * @index: numbers of bit of index(s)
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int j;

	if (index > 63)
		return (-1);
	j = (n >> index) & 1;
	return (j);
}

