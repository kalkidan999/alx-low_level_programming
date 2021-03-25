#include "holberton.h"
/**
 * set_bit - gets int to index number
 * @n: containing the decimal number
 * @index: containing the index
 * Return: the converted number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int status = (1 << index) | n;
if (index > 32)
return (-1);
return (status);
}
