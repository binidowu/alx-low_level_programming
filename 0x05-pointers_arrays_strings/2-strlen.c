#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to string character
 *
 * Return: Length of @s
 */
int _strlen(char *s)
{
	int len;

	/* Increments len to the value of s, post increment */
	for (len = 0; len < *s++; len++)
		;

	return (len);
}
