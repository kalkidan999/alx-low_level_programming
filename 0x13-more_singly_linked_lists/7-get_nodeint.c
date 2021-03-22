#include "lists.h"
/**
* get_nodeint_at_index - free list
* @head: pointer
* @index: to find nth character
*Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
return (current->data);
count++;
current = current->next;
}
assert(0);
}
