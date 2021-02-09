#include "holberton.h"
#include <ctype.h>
/**
 * _islower - check the code for Holberton School students.
 * Return: Always 0.
 * @c: lowwrcase
 */
int _islower(int c)
{
if (islower(c))
{
return(1);
}
else
{
return(0);
}
}
