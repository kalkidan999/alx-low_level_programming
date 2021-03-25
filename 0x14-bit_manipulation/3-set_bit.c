#include "holberton.h"
/**
 * set_bit - gets int to index number
 * @n: containing the decimal number
 * @index: containing the index
 * Return: the converted number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
*n |= (1 << index);
if (index > 32)
return (-1);
return (1);
}
