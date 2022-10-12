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

	for (; largo < n && src[largo]; largo++)
		dest[largo] = src[largo];

	dest[largo] = '\0';
	return (dest);
}
