#include "lists.h"
#include <stdlib.h>
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
head = NULL;
struct list_t* newnode=(struct list_t*)malloc(sizeof(struct list_t*));
char *target = strdup(*str);
newnode->len = target;
newnode->next = head;
head = newnode;
return (head);
}
