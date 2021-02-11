#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: characters
 * Return: 1 and 0
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
return (0);
}
