#include "main.h"

/**
 * _puts_rev_recursion - xd
 * @s : fdf
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
