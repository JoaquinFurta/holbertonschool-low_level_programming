#include "main.h"
/**
 * print_square - xd
 * @size : integer
 */
void print_square(int size)
{
	int i;
	int x;

	if (size > 0)
		for (x = 1; x <= size; x++)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
		_putchar('\n');
		}
	else
		_putchar('\n');
}
