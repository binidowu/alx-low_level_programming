# include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @j: stores interger
 *
 * Return: Absolute value
 */
int _abs(int j)
{
	if (j < 0)
	{
		j = j * -1;
		_putchar(j);
	}
	else
	{
		_putchar(j);
	}

	return (j);
}
