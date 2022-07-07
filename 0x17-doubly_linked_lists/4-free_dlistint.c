#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
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
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp = head;
    dlistint_t *current = head;

    while(temp)
    {
        temp = temp->next;
        free(current);
        current = temp;
    }
}