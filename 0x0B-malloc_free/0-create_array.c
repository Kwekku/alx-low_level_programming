#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: an array of chars
 * @c: specific char to print
 *
 * Return: NULL if size = 0, else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);

}

