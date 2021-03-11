#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print character.
 * @separator: character
 * @n: number
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arguments;
va_start(arguments, n);
if (n != 0)
{
for (i = 0; i < n ; i++)
{
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(arguments);
}
printf("\n");
}
