#include "main.h"

/**
 * main - Entrt point
 * Description: prints -putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "-putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		-putchar(str[ch]);
	-putchar('\n');

	return (0);
}
