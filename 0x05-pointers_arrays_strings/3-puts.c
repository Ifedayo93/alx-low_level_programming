#include "main.h"

/**
 * _puts - returns string
 * @str: string
 * Return: void
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	puts(str[i]);
	i++;
	}

	puts('\n');
}
