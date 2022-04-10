#include <stdio.h>
/**
 * Main - main entry
 * Description: Print the alphabet in lowercase then a new line
 * Return: 0
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);

}
