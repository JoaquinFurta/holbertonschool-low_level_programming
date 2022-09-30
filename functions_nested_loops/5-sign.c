#include "main.h"

/**
 * print_sign - xd
 * Return: 0, +, -
 * @n : xddd
 */
int print_sign(int n)
{
	int resultado;
	if (n > 0)
	{
		_putchar('+');
		resultado = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		resultado = -1;
	}
		else
		{
			_putchar ('0');
			resultado = 0;
		}
	return (resultado);
}
