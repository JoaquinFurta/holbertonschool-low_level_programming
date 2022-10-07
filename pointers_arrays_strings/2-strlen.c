#include "main.h"
/**
 * _strlen - xd
 * @s : des
 * Return: int
 */
int _strlen(char *s)
{
	int i;
	int contador;

	contador = 0;

	for (i = s[0]; i != '\0'; i++)
		contador++;
	return (contador);
}
