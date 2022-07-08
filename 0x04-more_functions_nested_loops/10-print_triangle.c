#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		j = 0;

		while (ii < size - i)
		{
			_putchar(' ');
			j++;
		}

		j = 0;

		while (ii < i)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}

	if (i == 1)
		_putchar('\n');
}
