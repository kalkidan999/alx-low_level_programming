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
char *p;
va_list arguments;
va_start(arguments, n);
for (i = 0; i < n ; i++)
{
p = va_arg(arguments, char*);
if (p != NULL)
printf("%s", p);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(arguments);
printf("\n");
}
