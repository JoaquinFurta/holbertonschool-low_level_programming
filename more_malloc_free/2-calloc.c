#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: elements of the array
 * @size: size of the memory
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *aux;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		aux = p;
		for (i = 0; i < nmemb * size; i++)
			aux[i] = '\0';
	}
	else
		return (NULL);
	return (p);
}
