#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head:list
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
int i;
int sum = 0;
for (i = 0; head != NULL; i++)
{
sum += head->n;
head = head->next;
}
return (sum);
}
