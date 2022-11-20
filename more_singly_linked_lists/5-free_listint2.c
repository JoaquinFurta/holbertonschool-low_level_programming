#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2((*head)->next);
		free(*head);
	}
	head = NULL;
}
