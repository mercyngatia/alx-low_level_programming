#include "main.h"
/**
 * *string_toupper - converts string to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
int z;

for (z = 0; s[z] != '\0'; z++)
{
if (s[z] > 96 && s[z] < 123)
{
s[z] -= 32;
	}
}
return (s);
}
