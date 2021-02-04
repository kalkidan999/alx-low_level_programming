#include <stdio.h>
/**
* main - single digits
* Return: last digit
*/
int main(void){
int i;
for (i = 0; i <= 9; i % 10)
i++;
putchar("%d\n", i);
return (0);
}
