#include "lists.h"
/**
* listint_len - prints n count n list
* @h: pointer to first
*Return: pointer
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
