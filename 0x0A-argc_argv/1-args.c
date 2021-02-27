#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
  int count;
  if (argc >= 0)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
  }

  return 0;
}
