#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)

{
	int space = 0;
	char alpha;

	while (space <= 0)
	{
	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
			_putchar(alpha);
	}
	_putchar('\n');
	space++;
	}
}
