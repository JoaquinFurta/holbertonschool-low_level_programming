#include "main.h"
/**
 * print_diagonal - xd
 * @n : integer
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar('\n');
			for (x = 1; x < i; x++);
				_putchar(' ');
		}

	_putchar('\n');
}