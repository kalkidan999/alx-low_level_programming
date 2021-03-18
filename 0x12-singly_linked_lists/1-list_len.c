#include "lists.h"
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
size_t list_len(const list_t *h)
{
int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
