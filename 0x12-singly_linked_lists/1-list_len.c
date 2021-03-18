#include "lists.h"
/**
* print_list - prints list
* @list_t: struct
* @h: pointer
*Return: pointer
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
