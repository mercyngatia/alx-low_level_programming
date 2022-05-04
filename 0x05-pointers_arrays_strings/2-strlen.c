#include "ain.h"
/**
 * _strlen - find the length of a string
 * @s: pointer to an int that will be updated
 * Return: void - correct
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
