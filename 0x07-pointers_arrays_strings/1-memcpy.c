#include "holberton.h"
/**
 * _memcpy - copies buffer
 * @dest: the pointer of memory to print
 * @src: the character of memory to print
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
for (index = 0; index < n; index++)
dest[index] = src[index];
return (dest);
}
