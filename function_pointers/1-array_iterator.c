#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: name of the person
 * @size: size of the array
 * @action: another function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
