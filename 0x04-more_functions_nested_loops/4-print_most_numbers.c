#include "main.h"

/**
 * print_most_numbers -prints 12356789
 * Return:void
 */

void print_most_numbers(void)
{
char c;

	for (c = '0'; c <= '9'; c++)
	for (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
