#include "main.h"

/**
 *  _strlen - returns the lengh of a string
 *
 * @s: string parameter input
 *
 * Return: lengh of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
