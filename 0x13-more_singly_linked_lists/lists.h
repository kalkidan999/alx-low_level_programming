#ifndef HOLBERTON_h
#define HOLBERTON_h
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * struct list_s - struct list
 * @str: string
 * @len: length
 * @next: pointer
 * Return: Always 0.
 */
typedef struct list_s
{
char *head;
unsigned int n;
struct list_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
