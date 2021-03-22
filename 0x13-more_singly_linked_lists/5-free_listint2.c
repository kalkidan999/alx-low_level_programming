#include "lists.h"
/**
* free_listint2 - free list
* @head: pointer
*Return: pointer
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (*head != NULL)
{
temp = (*head)->next;
free(temp);
*head = NULL;
}
}
