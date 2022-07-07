#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of times character \ should be printed.
 */
void print_diagonal(int n)
{
	int i, blank;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (blank = 0; blank < i; blank++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
