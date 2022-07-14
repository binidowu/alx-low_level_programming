#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @src: String to append
 * @dest: String to which src is appended
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != 0; len++)
		;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
