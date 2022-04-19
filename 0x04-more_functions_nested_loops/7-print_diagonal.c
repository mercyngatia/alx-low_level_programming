#include 'main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of \\ lines to be printed
 * Return: void
 */

void print_diagonal(int n)
{

int i;
int x;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (x = 0; x < i; x++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');

}

}

else
{
_putchar ('\n');
}

}

