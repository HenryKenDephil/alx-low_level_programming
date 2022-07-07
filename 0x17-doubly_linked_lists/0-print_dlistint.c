#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * struct dlistint_s - prints all elements of dlistint_t list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Return: returns the number of nodes
 * 
 */
typedef struct dlistint_s
{
    int n;
    dlistint_t *new
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    while(h)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    return (count);
}


