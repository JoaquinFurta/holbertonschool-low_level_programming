#include "main.h"

/**
 * _isalpha - xd
 * Return: 0, 1
 * @c : xddd
 */
int _isalpha(int c)
{
	char i;
	int resultado;

	resultado = 0;

	for (i = 'a'; i <= 'z'; ++i)
		if (c == i)
		{
			resultado = 1;
			i = 'z';
		}
	for (i = 'A'; i <= 'Z'; ++i)
		if (c == i)
		{
			resultado = 1;
			i = 'Z';
		}
	return (resultado);
}
