#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_strcat(char *dest, char *src)
{
	int c,c2;
	c = 0;
	while (dest[c])
		c++;
	for (c2=0;src[c2];c2++)
		dest[c++] = src[c2];
	return (dest);
}
