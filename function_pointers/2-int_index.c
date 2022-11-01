#include "function_pointers.h"

/**
 * int_index - prints a name
 * @array: name of the person
 * @size: size of the array
 * @cmp: another function
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, resultado = -1;

	if (size <= 0)
		return (0);
	while (i < size)
	{
		if (cmp(array[i]) == 0)
			i++;
		else
		{
			resultado = array[i];
			i = size;

		}
	}

	return (resultado);
}
