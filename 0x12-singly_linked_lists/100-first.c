#include <stdio.h>
void stat(void) __attribute__ ((constructor));
/**
 * stat - prints a sentence before the main
 * function is executed
 */
void stat(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
