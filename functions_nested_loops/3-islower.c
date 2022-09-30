#include "main.h"
/**
 * main - xd
 * Return: 0, 1
 */
int _islower(int c)
{
	char i;
	int resultado;

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (c == i)
		{
			resultado = 1;
			i = 'z';
		}
		else
			resultado = 0;
	}
	return (resultado);
}
