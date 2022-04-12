#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: is the int that will use for the argument of the function
 * Return: last digit of number
 */
int print_last_digit(int r)
{
int lastDigit;

if (r < 0)
{
lastDigit = (-1 * (r % 10));
_putchar (lastDigit + '0');
return (lastDigit);
}

else
{
lastDigit = (n % 10);
_putchar (lastDigit + '0');
return (lastDigit);
}

}
