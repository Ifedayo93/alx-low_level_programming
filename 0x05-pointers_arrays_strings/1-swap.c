#include <stdio.h>
/**
 * swap_int - swaps the values
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
