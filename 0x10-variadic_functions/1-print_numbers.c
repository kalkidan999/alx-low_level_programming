#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers.
 * @separator: number
 * @n: number
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arguments;
va_start(arguments, n);
if (n != 0)
{
for (i = 0; (i < n - 1); i++)
{
if (separator != NULL)
{
printf("%d%s", va_arg(arguments, int), separator);
}
else
{
printf("%d", va_arg(arguments, int));
}
}
printf("%d", va_arg(arguments, int));
va_end(arguments);
}
printf("\n");
}
