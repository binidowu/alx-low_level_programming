#include <stdio.h>

/**
 * main - Writes the alphabet in lowercase to stdout
 *
 * Return: Lowercase alphabet
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}

	return (0);
}
