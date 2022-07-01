#include <stdio.h>
/**
 * main - Ouputs lowercase alphabet in reverse
 *
 * Return: Prints alphabet
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
