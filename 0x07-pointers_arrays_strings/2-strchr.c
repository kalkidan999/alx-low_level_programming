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
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}                                                                                                          
if (*s == c)                                                                                         
{                                                                                                 
return (s);
}
return ('\0');
return (0);
}
