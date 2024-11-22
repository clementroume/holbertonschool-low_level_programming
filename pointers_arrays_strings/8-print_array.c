#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: The array
 * @n: Length of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		return 0;
	}

	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
		i++;
	}
}
