#include "lists.h"

/**
 * sum_listint; returns the sum of all the data (n) of a linked list
 * @head; had of the linked list
 *
 * Return; returns sum of all the data (n)
 */

int sum_listint(listint_t *head)

{
	int sum;

	sum = 0;
	whi;e (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
