#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * #Return: On success 1.
 * On error, -1 is returned, and erro is there returned
 */

int _putchar(char i)
{
return (write(1, &i, 1));
}
