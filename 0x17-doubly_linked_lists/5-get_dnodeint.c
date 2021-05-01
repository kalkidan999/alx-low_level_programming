#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head:list
 * @index:list
 * Return:nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i < index && head->next; i++)
{
head = head->next;
}
if (i < index)
{
return (NULL);
}
return (head);
}
