#include "holberton.h"
/**
 * _strchr - searches buffer 
 * @s: the pointer of memory to print
 * @c: the character of memory to print
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
int index;
int i;
while (s[i] != '\0')
{
i++;
}
for (index = 0; index < i; index++)
if (s[index] == c)
{
s = &s[index];
return (s);
}
else
{
return ('\0');
}
return (0);
}
