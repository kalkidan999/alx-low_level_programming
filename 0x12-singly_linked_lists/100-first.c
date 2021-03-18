#include <stdio.h>

void main(void) __attribute__ ((constructor));

/**
 * main - prints a sentence before the main
 * function is executed
 */
void main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
