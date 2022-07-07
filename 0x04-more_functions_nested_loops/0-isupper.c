#include "main.h"

/**
 * is_upper - Checks for uppercase character.
 * @c: Character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int is_upper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
