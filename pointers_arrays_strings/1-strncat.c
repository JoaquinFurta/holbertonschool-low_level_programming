#include "main.h"
/**
 * _strncat - xd
 * @src: des
 * @dest: ss
 * @n: dsd
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int contador = 0;
	int largo = 0;

	for (i = 0; src[i] != '\0'; i++)
		contador++;

	for (i = 0; dest[i] != '\0'; i++)
		largo++;


	for (i = 0; i <= n; i++)
		dest[contador + largo] = src[i];

	dest[largo + n] = '\0';
	return (dest);
}
