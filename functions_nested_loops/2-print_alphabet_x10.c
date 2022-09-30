#include "main.h"
/**
 * print_alphabet_x10 - xd
 * Return: 0
 */
int print_alphabet_x10(void)
{
	int  y;
	char i;

	for (y = 1; y <= 10; y++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
	return (0);
}
