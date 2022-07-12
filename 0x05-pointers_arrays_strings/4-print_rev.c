#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int len = 0;
	int n;

	/* Gets string length */
	while (s[len] != '\0')
		len++;

	/* Sets n to be the length of the string -1, prints reverse str */
	for (n = len - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
