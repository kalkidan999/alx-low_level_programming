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
unsigned char *memory = s, value = b;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
