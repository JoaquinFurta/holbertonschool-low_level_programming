#include "main.h"
/**
 * puts_half - xd
 * @str : des
 */
void puts_half(char *str)
{
	int i;
	int contador;

	contador = 0;

	for (i = 0 ; str[i] != '\0'; i++)
		contador++;
	if (contador % 2 == 0)
		for (i = contador / 2 + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	else
		for (i = contador / 2 + 2; str[i] != '\0'; i++)
			_putchar(str[i]);
}
