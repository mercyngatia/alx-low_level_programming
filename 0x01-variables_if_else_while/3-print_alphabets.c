#include <stdio.h>
/*8
 * main - Main entry
 *
 * Return: 0
 */
int main(void)

{
char lowerCase;
char upperCase;

for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
{
putchar(upperCase);
}

for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}

putchar('\n');

return (0);
}
