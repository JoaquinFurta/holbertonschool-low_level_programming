#include "main.h"

/**
 * array_range - array of int with a range as a parameter
 * @min: min
 * @max: max
 * Return: an array of integeres
 */

int *array_range(int min, int max)
{
	int *p, len = 0;

	if (min > max)
		return (NULL);

	for (; min <= max; min++)
		len++;

	p = malloc(len * 4);

	if (p == NULL)
		return (NULL);

	while (len - 1 >= 0)
	{
		p[len - 1] = max;
		max--;
		len--;
	}

	return (p);
}
