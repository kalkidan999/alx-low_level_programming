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
n = 0;
while (s[n] != '\0')
{
s[n] = b;
n++;
}
return (s);
}
