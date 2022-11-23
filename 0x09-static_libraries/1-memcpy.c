#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*p++ = *src++;

	return (dest);
}
