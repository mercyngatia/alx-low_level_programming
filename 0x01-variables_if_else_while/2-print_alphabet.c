#include <stdio.h>
/**
 * Main - main entry
 * Description: Print the alphabet in lowercase then a new line
 * Return: 0
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);
}
