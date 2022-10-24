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

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	return (p);
}
