#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Buffer storing the string copy.
 * @src: Source string.
 * @n: Maximum number of bytes to copied from src.
 *
 * Return: String.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
