#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a selected node
 *
 * @head: A pointer to the first node of the list
 * @index: index where the node should be deleted
 *
 * Return: 1 if success , - 1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int mem = 1;
	int res = -1;
	listint_t *temp = NULL, *aux;

	aux = *head;

	while ((aux != NULL) && (mem <= index))
	{
		temp = aux;
		aux = aux->next;

		mem++;
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		res = 1;

	}
	else if (aux != NULL)
	{
		temp->next = aux->next;
		free(aux);
		res = 1;
	}
	return (res);
}
