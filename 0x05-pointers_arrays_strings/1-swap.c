#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	/* Sets pointer a,b to temp storage */
	int tmp = *a;
	int temp = *b;

	/* Assign pointers a,b to each others temp storage*/
	*b = tmp;
	*a = temp;
}
