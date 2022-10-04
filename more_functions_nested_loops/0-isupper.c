#include "main.h"
/**
 * _isupper - xd
 * Return: 1,0
 * @c : integer
 */
int _isupper(int c)
{
	int i;
	int resultado;

	resultado = 0;
	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
			resultado = 1;
	return (resultado);
}
