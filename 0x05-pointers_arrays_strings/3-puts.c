#include "main.h"

/**
 * _strlen - returns string
 * @str: string
 * Return: string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_puts(str[len])
		len++;
	}

	_puts('\n');
}
