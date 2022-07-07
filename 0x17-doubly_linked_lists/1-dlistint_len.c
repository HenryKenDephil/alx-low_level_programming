#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * @Return: returns the number of elements in the linked list
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;
    while(h)
    {
        printf("%d\n", h->n);
        h = h-> next;
    }

    return (count);
}