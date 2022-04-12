#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int lowerCase;
int count;

count = 0;
while (count < 10);
{
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
_putchar(lowerCase);
}

count ++;
_putchar('\n');
}

}


