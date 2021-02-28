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
int sum, i;
sum = 0;
if (argc < 1)
{
printf("0\n");
return (1);
}
i = 1;
while (i < argc)
{
if (checkString(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
return (0);
}
