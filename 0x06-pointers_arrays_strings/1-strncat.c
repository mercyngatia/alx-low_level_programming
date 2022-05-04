#include "main.h"
/**
 * _strncat - concatenates n bytes o two things
 * @dest: pointer to a character that will be changed
 * @src: pointer source
 * @Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
