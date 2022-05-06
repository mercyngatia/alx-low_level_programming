#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string to be compared
 * @s2 string to be compared
 * Return: - of s1 < s2 - 0 if matches and + int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int a;

for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
}
return (0);
}
