#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, j = strlen(str);
for(i = 0; i < j; i++)
print_rev(str + 1);
_putchar(*str++);
_putchar('\n');
}
