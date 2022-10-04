#include "main.h"
/**
 * print_line - xd
 * @n : integer
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 1; i <= n; i++)
			_putchar('_');
	_putchar('\n');
}
