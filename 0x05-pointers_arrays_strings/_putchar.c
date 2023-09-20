#include <stdio.h>

/**
 * _putchar - wrltes the charctar c stdout
 * @c: the charctar to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errdo is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
