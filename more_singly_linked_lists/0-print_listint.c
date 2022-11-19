#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the list
 * @h: header of the list
 * Return: Number of nodes of the list
 */
size_t print_listint(const listint_t *h);
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
