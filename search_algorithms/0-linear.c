#include "search_algos.h"
/**
 * linear_search - search a value in an array,using the linear search algorithm
 * @array: array to search value
 * @size: size of the array
 * @value: integer to search
 * Return: index of the value, (-1) if it fails
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%ld]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
