#include "lists.h"
#include <stdlib.h>
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
struct list_t *newnode = malloc(sizeof(list_t));
char *target = strdup(str);
newnode->str = target;
newnode->len = len;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}
