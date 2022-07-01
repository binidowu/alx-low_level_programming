#include <stdio.h>
/**
 * main - Writes all posible 2 digit numbers to stdout
 *
 * Return: Numbers
 */
int main(void)
{
	int num;
	int ch;

	for (num = '0'; num <= '9'; num++)
	{
		for (ch = '1'; ch <= '9'; ch++)
		{
			if (ch > num)
			{
				putchar(num);
				putchar(ch);
				if (num != '8' || ch != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
