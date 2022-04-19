#include "main.h"

/**
 * _isupper - checks i the value is uppercase
 * @c: is the int that will use or the argument of the function
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}

else
{
return (0);
}

}
