#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: initial segment
 * @accept: characters to locate
 *
 * Return:  number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *p = accept;

	while (*s != 0)
	{
		if (*s == *p && *p != 0)
		{
			sum++;
			s++;
			p = accept;
		}
		else
			p++;
		if (*p == 0)
			return (sum);
	}
	return (sum);
}

