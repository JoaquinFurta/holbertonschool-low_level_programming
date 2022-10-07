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

	for (i = 0 ; s[i] != '\0'; i++)
		contador++;
	return (contador);
}
