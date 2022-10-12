#include "main.h"
/**
 * _strncat - xd
 * @src: des
 * @dest: ss
 * @n: dede
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int largo;
	int len;

	for (len = 0; dest[len] != '\0'; len++);

	for (largo = 0; largo < n && src[largo]; largo++)
		dest[largo + len] = src[largo];

	dest[largo + len] = '\0';
	return (dest);
}
