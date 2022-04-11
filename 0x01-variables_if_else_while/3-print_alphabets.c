#include <stdio.h>
/**
 * main - Main entry
 * escription: prints alphabet in lowercase,
 * then in uppercase, then new line
 * Return: 0
 */
int main(void)

{
char lowerCase;
char upperCase;

for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}

for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
{
putchar(upperCase);
}

putchar ('\n');

return (0);
}
