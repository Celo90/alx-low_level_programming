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

	int numBits = sizeof(unsigned long int) * 8;
	int i;

	for (i = numBits - 1; i >= 0; i--)
	{
	unsigned long int mask = 1UL << i;

	if (n & mask)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	}
		printf("\n");
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int num = 42;

	printf("Binary representation of %lu: ", num);
	print_binary(num);
	return (0);
}

