#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the list
 * @h: header of the list
 * Return: Number of nodes of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
