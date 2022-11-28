#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
