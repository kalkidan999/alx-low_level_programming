#include "lists.h"
/**
* print_listint - prints n count n list
* @h: pointer to first
*Return: pointer
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%i\n", h->n);
h = h->next;
i++;
}
return (i);
}
