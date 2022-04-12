#include "main.h"

/**
 * print_alphabet - prints alphabet s in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
char lowerCase;

for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
_putchar(lowerCase);
}

_putchar('\n');

}
