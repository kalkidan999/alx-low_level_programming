#include "holberton.h"
#include <string.h>
/**
 * _puts - check the code for Holberton School students.
 * @*str: integer1
 * Return: Always 0.
 */
void _puts(char *str)
{
int i, j = strlen(str);
for(i = 0; i < j; i++)
_putchar(*str++);
_putchar('\0');
}
