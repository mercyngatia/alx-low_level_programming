#include "main.h"
/**
 * _isalpha - checks for the alphabets,
 * return 1 if c is a letter, lowercase or uppercase.
 * @c: character to check
 * Return: 0 or 1
 */
int _isalpha(int c)
{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'z'))
{
return (1);
}

else
{
return (0);
}

}
