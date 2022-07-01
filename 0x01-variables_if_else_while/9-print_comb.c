#include <stdio.h>
/**
 * main - Writes single digit numbers to stdout
 *
 * Return: Numbers
 */
int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
