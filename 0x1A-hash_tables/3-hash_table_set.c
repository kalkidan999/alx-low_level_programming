#include "hash_tables.h"
/**
 * hash_table_set - implementation of the creating index
 * @ht: pointer to hashtable
 * @key: key to generate index
 * @value: hash value
 * Return: one
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, size;
hash_node_t *node, *temp;
if (!key || !value || !ht)
{
return (0);
}
size = ht->size;
index = key_index((const unsigned char *)key, size);
temp = ht->array[index];
while (temp)
{
if (temp && strcmp(key, temp->key) == 0)
{
free(temp->value);
temp->value = strdup(value);
if (temp->value == NULL)
{
return (0);
}
return (1);
}
temp = temp->next;
}
node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
return (0);
}
node->key = strdup(key);
if (node->key == NULL)
{
return (0);
}
node->value = strdup(value);
if (node->value == NULL)
{
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
