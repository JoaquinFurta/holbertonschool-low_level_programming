#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - prints the list
 * @head: header of the list
 * @n: integer
 * Return: Number of nodes of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *temp;

	temp = *head;

	aux = malloc(sizeof(dlistint_t));
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}
	aux->n = n;
	aux->next = NULL;

	if (temp == NULL)
		*head = aux;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = aux;
		aux->prev = temp;
	}

	return (*head);
}
