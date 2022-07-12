#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest
 * @dest: Buffer to copy the string to
 * @src: Source string to copy
 *
 * Return: Pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
