#include "main.h"
/**
 * _strcpy - xd
 * @src: des
 * @dest: ss
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int contador = 0;

	for (i = 0; src[i] != '\0'; i++)
		contador++;

	for (i = 0; i < contador; i++)
		dest[i] = src[i];
	dest[contador] = '\0';
	return (dest);
}
