#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 * @a: pointer 1 to an int that will be updated
 * @b: pointer 2 to an int that will be updated
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
