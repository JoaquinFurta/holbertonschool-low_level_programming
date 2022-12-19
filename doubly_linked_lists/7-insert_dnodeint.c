#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a node to the list
 *
 * @head: A pointer to the first node of the list
 * @idx: index where the new node should be added
 * @n: int to be charged to the list
 *
 * Return: addres of the new node or null if Fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int mem = 0;
	dlistint_t *temp = NULL, *aux;

	aux = *head;

	while ((aux != NULL) && (mem <= idx))
	{
		aux = aux->next;
		mem++;
	}


	temp = malloc(sizeof(*head));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = aux;
		aux->prev = temp;
		temp->prev = NULL;
		*head = temp;
	}
	else if (aux != NULL)
	{
	 	temp->next = aux;
		temp->prev = aux->prev;
		aux->prev = temp;
	}
	else
		return (NULL);

	return (temp);
}
