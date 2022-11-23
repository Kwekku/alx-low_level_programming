#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be looked for
 * @needle: substring to be looked for
 *
 * Return: pointer to byte at start of substring, or
 * NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p, *n;

	while (*haystack != 0)
	{
		p = haystack;
		n = needle;
		if (*n == 0)
			return (haystack);
		while (*p != 0)
		{
			if (*p != *n)
				break;
			p++;
			n++;
			if (*n == 0)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
