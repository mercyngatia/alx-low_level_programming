#include <stdio.h>
/**
 * main - main entry
 * Description: prints the alphabet in lowercase,
 * followed by a new line, eccept e and q.
 * Return: 0
 */
int main(void)
{
char lowerCase;

for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
if (lowerCase == 'e')
continue;

else if (lowerCase =='q')
continue;

putchar(lowerCase);
}

putchar('\n');

return (0);

}
