#include <stdio.h>
/**
 * main - prints lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char alpha = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}