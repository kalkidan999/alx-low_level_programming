#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  if (argc > 0)
    {
      for (count = 0; count < argc; count++)
	{
	  printf("%s\n", argv[count]);
	}
  }
  return 0;
}
