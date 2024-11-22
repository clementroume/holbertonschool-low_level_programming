#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: The string
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
