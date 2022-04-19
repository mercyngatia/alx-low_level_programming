#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
int x;
int firstNumber;
int secondNumber;
int result;

x = 0;
result = 0;
while (x < 10)
{
while(result <= 14)
{
if (result < 10)
{
secondNumber = result;
}

else
{
firstNumber = result / 10;
secondNumber = result % 10;
_putchar (firstNumber + '0');
}

_putchar (secondNumber + '0');

result++;
}
i++;
result = 0;
_putchar ('\n');
}

}
