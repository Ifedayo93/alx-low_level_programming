#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Does not return 0 (Success)
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
