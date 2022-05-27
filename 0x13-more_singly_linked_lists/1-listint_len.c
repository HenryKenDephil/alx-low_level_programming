#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len: prints the number of elements in a linked list
 * @*h: head of the linked list
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
