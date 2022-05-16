#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operstions
 * Description: the program references 4 arguments
 * defined in 3-op_functions.c without calling them directly.
 * It has 3 exit statuses
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * 98 - if the arguments are not 4
 * 99 - if op is null
 * 100 - if div or mod gives an answer 0
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a, b, c;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
c = f(a, b);
printf("%d\n", c);
return (0);
}
