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
int i, j;

for (i = 0; dest[i] != '\n'; i++);

for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
{
dest[i] = src[j];
}
return (dest);
}
