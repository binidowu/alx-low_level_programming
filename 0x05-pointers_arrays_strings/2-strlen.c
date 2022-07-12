#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to string character
 *
 * Return: Length of @s
 */
int _strlen(char *s)
{
	int len = 0;

	/* Increments len to the value of s, post increment */
	while (*s++)
		len++;

	return (len);
}
