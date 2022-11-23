#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: The integer we are calculating the absolute value of.
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	int result;

	if (a < 0)
		result = a * (-1);
	else
		result = a;

	return (result);
}

