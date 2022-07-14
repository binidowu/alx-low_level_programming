#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: String to be appended upon.
 * @src: String to be appended to dest.
 * @n: Number of bytes from src to be appended to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
