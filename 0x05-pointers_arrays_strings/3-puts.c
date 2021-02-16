#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: integer1
 * Return: Always 0.
 */
void _puts(char *str)
{
char temp;
int length = 0;
while (*str != '\0')
{
temp = *str;
_putchar(temp);
length++;
str++;
}
_putchar('\n');
}
