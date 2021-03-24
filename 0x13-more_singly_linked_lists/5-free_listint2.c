#include "lists.h"
/**
* free_listint2 - free list
* @head: pointer
*Return: pointer
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
while (head && *head)
{
temp = *head;
*head = temp->next;
free(temp);
}
}
