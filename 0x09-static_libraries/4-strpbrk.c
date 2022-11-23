#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be looked for
 * @accept: characters to look for
 *
 * Return: pointer to first occurrence of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != 0)
	{
		if (*s == *p && *p != 0)
			return (s);
		p++;
		if (*p == 0)
		{
			p = accept;
			s++;
		}
	}
	return (0);
}
