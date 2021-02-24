#include "holberton.h"
/**
 *_pow_recursion - check the code.
 *@x: character
 *@y: character
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y > 1)
{
pwr = x * _pow_recursion(x++);
return (pwr);
}
