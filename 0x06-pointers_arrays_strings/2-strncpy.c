#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: string to copy to
 * @src: string to be copied from
 * @n: int that determines no. of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; n > i; i++)
dest[i] = '\0';

return (dest);

}
