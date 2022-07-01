#include <stdio.h>
/**
 * main - Ouputs lowercase alphabet
 *
 * Return: Prints alphabet
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
