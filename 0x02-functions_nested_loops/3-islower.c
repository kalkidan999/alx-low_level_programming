#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * Return: Always 0
 * @c: c file
 */
int _islower(int c)
{
if(c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
