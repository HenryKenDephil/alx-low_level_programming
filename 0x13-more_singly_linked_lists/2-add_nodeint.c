#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint; adds a new node at the begining of the linked list
 * @head; head of the linked list
 * @n; n elements
 * Return; returns the address of the new list. null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return(NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
