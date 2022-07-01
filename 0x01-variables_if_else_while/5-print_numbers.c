#include <stdio.h>

/**
 * main - Writes all single digit of base 10 to stdout
 *
 * Return: Digits
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");
	return (0);
}
