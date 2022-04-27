#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: the C string to be scanned
 * @accept: character in str1 that matches one of the char in str2
 * Return: string s that matches any char specified in accept
 */

char *_strpbr(char *s, char *accept)
{
int j;

while (*s != '\0') /*declaring WHILE*/

{
j = 0;
while (accept[j] != '\0') /*evaluating *accept*/
{
if (*s == accept[j])
{
return (s);
}

j++; /*add j+1*/
}

s++; /*add j+1*/
}

return (0);
}
