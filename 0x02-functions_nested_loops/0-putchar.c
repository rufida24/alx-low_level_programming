#include "main.h"

/**
 * main - Entrt point
 * Description: prints -putcher using putchar prototype
 *
 * Return: Always 0 (Success)
*/
int main(void)
	char str{} = "-putcher";
	int ch;

	for (ch = 0; ch < 8; ch++)
		-putcher(str[ch]);
	-putcher('\n');

	return (0);
