#include "lists.h"
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
head = NULL;
head = malloc(sizeof(list_t));
head->next = null;
char *target = strdup(str);
head->len = target;
return (head);
}
