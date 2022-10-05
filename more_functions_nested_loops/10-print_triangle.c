#include "main.h"
/**
 * print_triangle - xd
 * @size : integer
 */
void print_triangle(int size)
{
	int i;
	int x;

	x = 1;
	while (x <= size)
	{
		for (i = 1; i <= size - x; i++)
			_putchar(' ');
		for (i = 1; i <= x; i++)
			_putchar('#');
		_putchar('\n');
		x = x + 1;
	}
	if (size <= 0)
		_putchar('\n');
}
