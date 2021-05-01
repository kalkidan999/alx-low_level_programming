#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head:struct pointer
 * @n:struct list
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *src;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
if (head == NULL)
{
temp->next = NULL;
temp->n = n;
temp->prev = NULL;
*head = temp;
return (temp);
}
while (start->next)
{
start = start->next;
}
start->next = temp;
temp->prev = start;
temp->next = NULL;
temp->n = n;
return (temp);
}
