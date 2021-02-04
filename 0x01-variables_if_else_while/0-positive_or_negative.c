#include <stdlib.h>
#include <time.h>
/**
* more headers goes there 
*/
/**
 * my_function - This is a description
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is posotive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
/**
 * is_positive - Check if a number is greater than 0
 * @nb: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
