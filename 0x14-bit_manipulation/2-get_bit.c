#include "holberton.h"
/**
 * get_bit - gets int to index number
 * @n: containing the decimal number
 * @index: containing the index
 * Return: the converted number
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int status = (n >> index) & 1;
if (index > 32)
return (-1);
return (status);
}
