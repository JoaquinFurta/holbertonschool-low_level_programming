#include "main.h"
/**
 * print_rev - xd
 * @s : des
 * Return: int
 */
void print_rev(char *s)
{
	int i;
	int contador;

	contador = 0;

	for (i = 0 ; s[i] != '\0'; i++)
		contador++;
	for (i = (contador - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
