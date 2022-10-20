#include "main.h"
/**
 * _strdup - creates an array of chars
 * @str: char
 * Return: a copy of the stirng
 */
char *_strdup(char *str)
{
	int i, mem = 0;
	char *p;

	if (str == NULL)
		return ('\0');

	while (str[mem] != '\0')
		mem++;

	p = malloc(mem + 2);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < mem; i++)
		p[i] = str[i];

	return (p);
	free(p);
}
