#include "lists.h"
/**
* free_listint - free list
* @head: pointer
*Return: pointer
*/
void free_listint(listint_t *head)
{
listint_t *temp;
if (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
