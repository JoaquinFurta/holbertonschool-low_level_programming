#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the list
 * @h: header of the list
 * Return: Number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		printf("%s",h->str);
		cont++;
		h = h->next;
	}
	return (cont);
}
