#include "main.h"
/**
 * int _isdigit - xd
 * Return: 1,0
 * @c : integer
 */
int _isdigit(int c)
{
	int i;
	int resultado;

	resultado = 0;
	for (i = '0'; i <= '9'; i++)
		if (c == i)
			resultado = 1;
	return (resultado);
}
