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
for (i = 0; i < n; i++)
{
va_arg(arguments, int);
if (i < n)
printf("%c", *separator);
}
printf("\n");
va_end(arguments);
}
