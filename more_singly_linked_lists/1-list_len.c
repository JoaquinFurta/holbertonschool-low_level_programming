#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the list
 * @h: header of the list
 * Return: Number of nodes of the list
 */
size_t listint_len(const listint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
