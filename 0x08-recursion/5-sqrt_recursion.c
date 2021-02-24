#include "holberton.h"
/**
 *_sqrt_recursion - check the code.
 *@n: character
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
if (n == (n-1))
{
return (n * _sqrt_recursion(n - 1));
}
else
{
return (-1);
}
}
