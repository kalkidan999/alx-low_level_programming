#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 *@s: character
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
if (*s)
{
_puts_recursion(*s);
s[i] = *s;
}
}
