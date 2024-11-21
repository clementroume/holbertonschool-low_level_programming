#include <stdio.h>
#include <unistd.h>
/**
 * swap_int - function that swap two int
 * @a: First int
 * @b: Second int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
