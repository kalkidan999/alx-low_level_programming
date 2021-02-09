#include "holberton.h"
/**
 * jack_bauer - timing
 */
void jack_bauer(void)
{
int HourTen = '0';
int HourOne = '0';
int MinuteTen = '0';
int Minuteone = '0';
for (HourTen = '0'; HourTen <= '9'; HourTen++)/
{
for (HourOne = '0'; HourOne <= '9'; HourOne++)
{
for (MinuteTen = '0'; MinuteTen <= '5'; MinuteTen++)
{
for (Minuteone = '0'; Minuteone <= '9'; Minuteone++)
{
if (MinuteTen == 5 && Minuteone == 9)
break;
else
{
_putchar (HourTen);
_putchar (HourOne);
_putchar (':');
_putchar (MinuteTen);
_putchar (Minuteone);
_putchar ('\n');
}
}
}
}
}
_putchar('\n');
}
