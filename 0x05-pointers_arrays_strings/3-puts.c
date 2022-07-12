#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to string
 */
void _puts(char *str)
{
	/* Loops through and prints string till end of string is reached */
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}
