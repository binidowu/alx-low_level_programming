#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int n = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	for (n = len - 1; n >= len / 2; n--)
	{
		temp = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = temp;
	}
}
