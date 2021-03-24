#include "lists.h"
/**
 * reverse_listint - function that reverses
 * @head: double pointer
 * Return: a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *past = NULL;
listint_t *next;
while (head && *head)
{
next = head[0]->next;
head[0]->next = past;
past = head[0];
head[0] = next;
}
*head = past;
return (*head);
}
