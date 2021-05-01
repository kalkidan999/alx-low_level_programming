#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head:list
 * @index:list
 * Return:nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if(i > index && head->next)
{
head = head->next;
}
else
{
return (NULL);
}
return (head);
}
