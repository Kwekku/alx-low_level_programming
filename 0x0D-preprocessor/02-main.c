#include <stdio.h>
/**
 * main - program that prints the name of the file
 * Description: print file name from which file is compiled from
 * Return: always a success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

