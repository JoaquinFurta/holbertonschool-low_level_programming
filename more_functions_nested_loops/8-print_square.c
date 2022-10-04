#include "main.h"
/**
 * print_square - xd
 * @size : integer
 */
void print_square(int size)
{
	int i;

	if (size > 0)
		for (i = 1 ; i <= size; i++)
			_putchar('#');
	_putchar('\n');
}
