#include "main.h"

/**
 * _strlen_recursion - return length of string
 *
 * @s: string to get length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * palindromeChecker - checks the string
 *
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starts at 0
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * is_palindrome - returns if string is palindrome or not
 *
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}

