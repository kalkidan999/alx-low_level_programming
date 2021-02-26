#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: integer1
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
