#include "lists.h"
/**
 * delete_dnodeint_at_index - inserts new node at given position.
 * @head: pointer to the list
 * @index: unsigned integer
 * Return:the address of the new node, or NULL if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *src;
unsigned int i;
unsigned int len = len_node(head);
src = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
src = src->next;
free(*head);
*head = src;
if (src != NULL)
src->prev = NULL;
return (1);
}
for (i = 0; i <= index - 1; i++)
{
src = src->next;
if (!src)
return (-1);
}
if (len - 1 == index)
{
src->prev->next = NULL;
free(src);
return (1);
}
src->prev->next = src->next;
src->next->prev = src->prev;
free(src);
return (1);
}
/**
 * len_node - list len
 *
 * @node:list
 * Return:unsigned int
 */
unsigned int len_node(dlistint_t **node)
{
unsigned int len = 0;
dlistint_t *src;
src = *node;
while (src != NULL)
{
len += 1;
src = src->next;
}
return (len);
}
