#include <stdio.h>

/**
 * main - Prints to stdout, the size of several types
 *
 * Return: Prints the sizes
 */
int main(void)
{
	char ch;
	int it;
	long int lt;
	long long int llt;
	float flt;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(it));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(lt));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(llt));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(flt));

	return (0);
}
