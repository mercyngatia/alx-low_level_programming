#include <stdio.h>
/**
 * main - Main entry
 * Description: prints lowercase alphabet in reverse, then new line
 */
int main(void)

{
char alphabet_reverse;

for (alphabet_reverse = 122; alphabet_reverse >= 97; alphabet_reverse--)
{
putchar(alphabet_reverse);
}

putchar ('\n');

return (0);

}
