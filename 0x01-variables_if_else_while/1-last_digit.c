#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Maint entry
 *Description: Getting a random number and check it's last digit, compare it with 5
 * Return: 0
 */
int main(void)

{
int n;
int lastn;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;

if (lastn > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, lastn);
else if (lastn == 0)
printf("Last digit of %i is %i and is 0\n", n, lastn);
else if(lastn < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastn);

return (0);
}
