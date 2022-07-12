#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0, n;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
