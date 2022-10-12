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
	int largo = 0;
	int len = 0;

	for (; dest[len]; len++);
	for (; largo < n && src[largo]; largo++)
		dest[largo + len] = src[largo];

	dest[largo + len] = '\0';
	return (dest);
}
