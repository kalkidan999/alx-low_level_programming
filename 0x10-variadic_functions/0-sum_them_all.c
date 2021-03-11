#include "variadic_functions.h"
/**
 * sum_them_all - check the sum.
 * @n: number
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list arguments;
va_start(arguments, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
return (sum);
}
