#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 * Return: Always 0.
 */
int _isupper(int c)
{
char ch;
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
_putchar(ch);
if (c == ch)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
}
