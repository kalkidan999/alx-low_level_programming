#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, j = strlen(s);
for(i = 0; i < j; i++)
print_rev(s + 1);
_putchar(*s++);
_putchar('\n');
}
