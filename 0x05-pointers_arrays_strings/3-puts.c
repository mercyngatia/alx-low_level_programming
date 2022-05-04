#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to an int that will be changed
 * Return: void - correct
 */

void _puts(char *str)
{
char *i;
int x;

i = str;

for (x = 0; i[x]; x++)
{
_putchar(i[x]);
}
_putchar('\n');
}
