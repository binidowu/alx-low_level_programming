#include <stdio.h>
#include <unistd.h>
/**
 * main - Writes string to stderr without using puts or printf
 *
 * Return: Prints out string using writes
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
