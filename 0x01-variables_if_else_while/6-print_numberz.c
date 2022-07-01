#include <stdio.h>

/**
 * main - Writes all single digit of base 10 to stdout
 *
 * Return: Digits using putchar()
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		/* Converts each number to its corresponding ASCII value*/
		putchar(num + '0');
	}

	putchar('\n');
	return (0);
}
