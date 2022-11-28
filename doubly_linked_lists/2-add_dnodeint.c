#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - prints the list
 * @head: header of the list
 * @n: integer
 * Return: Number of nodes of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux;

	aux = malloc(sizeof(dlistint_t));
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->n = n;
	aux->next = *head;
	if (!*head)
		(*head)->prev = aux;
	aux->prev = NULL;
	*head = aux;


	return (*head);
}
