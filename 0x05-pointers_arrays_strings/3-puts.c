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
		_puts(str[i]);
	}

	_puts('\n');
}
