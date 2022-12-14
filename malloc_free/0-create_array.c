#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: Returns NULL if size = 0, Returns a pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return ('\0');


	p = malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
	free(p);
}
