#include "holberton.h"
/**
 *factorial - check the code.
 *@n: character
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if ( n == 0)
{
return (0);
}
else
{
return (n * factorial(n + 1));
}
}
