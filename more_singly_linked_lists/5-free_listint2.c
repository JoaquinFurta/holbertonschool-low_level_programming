#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Realease the memory allocated for a list, sets head to null
 *
 * @head: A pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
		return;

	free(*head);
	head = NULL;
}
