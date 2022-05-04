#include "main.h"
/**
 * * _strncat - concatenates n bytes o two things
 * @dest: pointer to a character that will be changed
 * @src: pointer source
 * @n: value
 * @Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
	;
for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
{
	dest[x] = src[y];
}
return (dest);
}
