#include "lists.h"

/**
 * struct dlistint_s - adds node at the beginning doubly linked list
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

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return(NULL);
    
    new_node->prev = NULL;
    new_node->next = *h;
    new-node->n = n;
    if (*head != NULL)
        (*head)->prev = new_node;
    *head = new_node;

    return(new_node);
}