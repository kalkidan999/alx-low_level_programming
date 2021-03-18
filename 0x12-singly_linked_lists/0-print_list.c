#include "lists.h"
/**
* print_list - prints list
* @size: int
* @c: array of strings
*Return: pointer
*/
size_t print_list(const list_t *h)
{
int len = 0;
while (h)
{
len++;
h = malloc(sizeof(list_t));
printf("%d", h->val);
h = h->next;
}
return (len);
}
