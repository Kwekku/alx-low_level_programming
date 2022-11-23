#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting point of memory
 * @b: constant byte
 * @n: bytes to write
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;

	return (s);
}

