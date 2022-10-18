#include "main.h"

/**
 * _pow_recursion - xd
 * @x : fdf
 * @y : ff
 * Return: return int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y <= 1)
	{
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
