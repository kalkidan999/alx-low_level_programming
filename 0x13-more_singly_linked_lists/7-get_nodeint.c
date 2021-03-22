#include "lists.h"
/**
* get_nodeint_at_index - free list
* @head: pointer
* @index: to find nth character
*Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
int count = 0;
if (head == NULL)
{
return (NULL);
}
while (temp != NULL)
if (count == index)
return (temp->n); 
count++;
temp = temp->next;
return(temp);
}
