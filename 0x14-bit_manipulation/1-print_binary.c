#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int a, b = 0;
	unsigned long int new;

	for (a = 63; a >= 0; a--)
	{
		new = n >> a;
		if (new & 1)
		{
			_putchar('1');
			b++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}

