#include "lists.h"
/**
* print_listint - prints n count n list
* @h: pointer to first
*Return: pointer
*/
size_t print_listint(const listint_t *h)
{
size_t i;
if (h == NULL)
{
return (0);
}
for (i = 0; h != NULL; i++)
{
printf("%i\n", (*h).n);
h = (*h).next;
}
return (i);
}
