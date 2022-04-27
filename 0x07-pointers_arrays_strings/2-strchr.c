#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurence of character c in string s
 */

char *_strchr(char *s, char c)
{
while (*s != '\0') /*declaring WHILE*/
{
if (*s == c) /*if s ==c*/
{
return (s); /*return s*/
}

++s;
}

if (*s == c)
{
return (s);

}

return (0); /* values null*/
}
