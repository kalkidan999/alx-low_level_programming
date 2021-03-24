#include "lists.h"
/**
* free_listint2 - free list
* @head: pointer
*Return: pointer
*/
void free_listint2(listint_t **head)
{
listint_t *temp = *head;
if (temp)
{
while (temp->next)
{
*head = NULL;
temp = temp->next;
free(*head);
}
free(temp);
}
}
