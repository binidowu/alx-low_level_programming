#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by
 * a new line
 */
void print_alphabet_x10(void)
{
	char i;
	int temp = 0;

	while (temp++ <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
