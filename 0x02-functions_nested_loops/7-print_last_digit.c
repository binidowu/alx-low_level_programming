#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: stores number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
}
