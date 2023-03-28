#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer to an integer
 * @b: Pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
