#include "lists.h"
/**
* free_listint - free list
* @head: pointer
*Return: pointer
*/
void free_listint(listint_t *head)
{
listint_t *val = head;
if (val)
{
while (val->next)
{
head = val;
val = val->next;
free(head);
}
free(val);
}
}
