#include <stdio.h>
/**
 * main - Writes lowercase alphabet except q and e to stdout
 *
 * Return: Prints custom alphabet
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}

		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
