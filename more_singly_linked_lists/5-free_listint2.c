#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listintxd - Realease the memory allocated for a list
 * @head: A pointer to the first node of the list
 * Return: 0 if success
 */

int free_listintxd(listint_t *head)
{
	if (head)
	{
		free_listintxd(head->next);
		free(head);
	}
	return (0);
}

/**
 * free_listint2 - Realease the memory allocated for a list, sets head to null
 *
 * @head: A pointer to the first node of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	free_listintxd(*head);
	head = NULL;
}
