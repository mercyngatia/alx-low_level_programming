#include "main.h"
/**
 * _strspn - Locates a character in a string
 * @s: the main C string to be scanned
 * @accept: the string containing the list of characters to match in s
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)

{
int i, j;
int count = 0;
char *str1, *str2;

str1 = s;
str2 = accept;

i = 0;
while (str1[i] != '\0') /*declaring WHILE *s */
{
j = 0;
while (str2[j] != '\0') /*declaring WHILE *accept */
{
if (str2[j] == str1[i]) /*evaluate condition*/
{
count++;
break;
}

j++; /*add j+1*/
}

if (s[i] != accept[j]) /* if not equals*/
{
break;
}

i++; /*add x+1*/
}

return (count); /*return the value of count*/
}
