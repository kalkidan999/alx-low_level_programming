#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print character.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list arguments;
va_start(arguments, format);
 while (*format != '\0')
 {
 if (*format == 'd')
 {
 int i = va_arg(arguments, int);
 printf("%d\n", i);
 }
if (*format == 'c')
{
int c = va_arg(arguments, int);
printf("%c\n", c);
}
if (*format == 'f')
{
double d = va_arg(arguments, double);
printf("%f\n", d);
}
if (*format == 's')
{
int *s = va_arg(arguments, int);
printf("%c\n", *s);
 }
 }
va_end(arguments);
}
