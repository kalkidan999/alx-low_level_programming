#include "holberton.h"
/**
 * _memset - prints buffer
 * @s: the pointer of memory to print
 * @b: the character of memory to print
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0; index < n; index++)
s[index] = b;
return (s);
}
