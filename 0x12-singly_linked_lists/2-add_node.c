#include "lists.h"
#include <stdlib.h>
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
newnode = malloc(sizeof(list_t));
newnode->str = strdup(str);
newnode->len = len;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}
