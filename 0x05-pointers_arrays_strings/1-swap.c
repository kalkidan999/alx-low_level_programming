#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: integer1
 * @b: integer2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
