#include "hash_tables.h"
/**
 * key_index - implementation of the creating index
 * @key: key to generate index
 * @size: table size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash, idx;
hash = hash_djb2(key);
idx = hash % size;
return (idx);
}
