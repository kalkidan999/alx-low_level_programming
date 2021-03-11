#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print character.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
unsigned int j = 0, start = 0;
char *p;
va_list arguments;
va_start(arguments, format);
while (format && format[j] != '\0')
{
switch (format[j])
{
case 'c':
switch (start)
{
case 1: printf(", "); }
start = 1;
printf("%c", va_arg(arguments, int));
break;
case 'i':
switch (start)
{
case 1: printf(", "); }
start = 1;
printf("%i", va_arg(arguments, int));
break;
case 'f':
switch (start)
{
case 1: printf(", "); }
start = 1;
printf("%f", va_arg(arguments, double));
break;
case 's':
switch (start)
{
case 1: printf(", "); }
start = 1;
p = va_arg(arguments, char*);
if (p)
{
printf("%s", p);
break;
}
printf("%p", p);
break;
}
j++;
}
printf("\n");
va_end(arguments);
}
