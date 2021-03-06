#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: stores number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n++);
		if (n != 99)
			printf(", ");
	}
	while (n >= 98)
	{
		printf("%d", n--);
		if (n != 97)
			printf(", ");
	}

	printf("\n");
}
