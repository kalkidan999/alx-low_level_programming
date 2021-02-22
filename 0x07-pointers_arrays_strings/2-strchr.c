#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - searches buffer 
 * @s: the pointer of memory to print
 * @c: the character of memory to print
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
int i, count = 0;
char *p = NULL;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
count++;
}
return (s[i - count]);
}
