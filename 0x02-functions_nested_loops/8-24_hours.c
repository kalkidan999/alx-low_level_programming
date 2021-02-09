#include "holberton.h"
# /**
#  * my_function - does my stuff
#  * @my_arg: its mine damnit
#  *
#  * Does my stuff explained.
#  */
void jack_bauer(void)
{
int HourTen = '0';
int HourOne = '0';
int MinuteTen = '0';
int Minuteone = '0';
for (HourTen = '0'; HourTen <= '9'; HourTen++)/* prints hours ten digit*/
{
for (HourOne = '0'; HourOne <= '9'; HourOne++)/* prints Hours one digit*/
{
for (MinuteTen = '0'; MinuteTen <= '5'; MinuteTen++)/* prints minutes ten digit*/
{
for (Minuteone = '0'; Minuteone <= '9'; Minuteone++)/* prints minutes one digit*/
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
