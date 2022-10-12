#include "main.h"
/**
 * _strcat - xd
 * @src: des
 * @dest: ss
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int contador = 0;
	int largo = 0;

	for (i = 0; src[i] != '\0'; i++)
		contador++;
	
	for (i = 0; dest[i] != '\0'; i++)
		largo++;


	for (i = 0; i < contador; i++)
		dest[i + largo] = src[i];

	dest[largo + contador] = '\0';
	return (dest);
}
