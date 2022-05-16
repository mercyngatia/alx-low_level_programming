#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: string value for name
 * @f: pointer to print function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
