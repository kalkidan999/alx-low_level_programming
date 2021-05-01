#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head:struct pointer
 * @n:struct list
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->next = NULL;
temp->prev = *head;
temp->n = n;
if (*head != NULL)
(*head)->next = temp;
*head = temp;
return (temp);
}
