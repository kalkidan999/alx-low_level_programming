#include "lists.h"
/**
* print_list - prints list
* @size: int
* @c: array of strings
*Return: pointer
*/
size_t print_list(const list_t *h)
{
size_t len = 0;
while (h)
{
if (!h->s)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->val, h->s);
h = h->next;
len++;
}
return (len);
}
