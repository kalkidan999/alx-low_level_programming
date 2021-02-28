#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc < 1)
{
printf("0\n");
return (1);
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
