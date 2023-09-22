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
	int k;
	int n;

	k  = 0;
	while (dest[k] != '\0')
	{
		k++;
	
	}
	n=0;
	
	while (src[n] != '\0'
	{
		dest[k] = src[n];
		k++;
		n++;
	}
	dest[k] = '\0';
	return (dest);
}
