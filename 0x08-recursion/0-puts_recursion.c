#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 *@s: character
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s);
_putchar(s);
}
}
