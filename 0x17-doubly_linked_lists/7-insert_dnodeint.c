#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given position.
 * @h: pointer to the list
 * @idx: unsigned integer
 * @n: integer n
 * Return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int j = 0;
dlistint_t *src, *temp;
unsigned int len = len_node(h);
if (idx == 0)
return (add_dnodeint(h, n));
src = *h;
while (src)
{
if (j == idx - 1)
break;
else if (j < idx - 1 && src == NULL)
return (NULL);
src = src->next;
j++;
}
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
if (len == idx)
return (add_dnodeint_end(h, n));
else if (len < idx)
return (NULL);
src->next->prev = temp;
temp->next = src->next;
src->next = temp;
temp->prev = src;
temp->n = n;
return (temp);
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
