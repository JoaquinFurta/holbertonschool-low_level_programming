#include "main.h"
/**
 * _strncpy - xd
 * @src: des
 * @dest: ss
 * @n: dsd
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0

	for (i = 0; src[i] && i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
