#include "main.h"

/**
 * swap_int - swasp the values of tow integers
 *		using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Returen: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
