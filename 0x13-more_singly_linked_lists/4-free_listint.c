#include "lists.h"
/**
* free_listint - free list
* @head: pointer
*Return: pointer
*/
void free_listint(listint_t *head)
{
listint_t *temp = head;
if (temp)
{
while (temp->next)
{
head = temp;
temp = temp->next;
free(head);
}
free(temp);
}
}
