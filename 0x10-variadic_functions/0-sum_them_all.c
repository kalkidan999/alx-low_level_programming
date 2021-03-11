#include "variadic_functions.h"
/**
 * main - check the code for Holberton School students.
 *
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
return 0;
}
for (i = 0; i < n; i++)
{
sum += va_arg(sum, int);
}
va_end (sum);
return (sum);
}
