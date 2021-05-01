#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h:struct list
 * Return:list len
 */
size_t dlistint_len(const dlistint_t *h)
{
int i;
size_t head = 0;
for (i = 0; h; i++)
{
head += 1;
h = h->next;
}
return (head);
}
