#include "main.h"

/**
 * print_alphabet_x10 - checks code
 *
 * Returns void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char alpha = 'a';

	while (round < 10) /*print lowercases a-z*/
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		round++;
	}
}
