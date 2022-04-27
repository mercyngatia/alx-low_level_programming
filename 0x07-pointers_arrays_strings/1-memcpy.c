#include "main.h"
/**
 * _memcpy - copy number bytes form address "from" to address "to"
 * @dest: content is to be copied
 * @src: source o data to be copied
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

i = 0;
while (i < n) /*declaring WHILE*/
{
*(dest + i) = *(src +); /*add 1 position dest and src*/
i++;

} /*END WHILE*/

return (dest);
}

