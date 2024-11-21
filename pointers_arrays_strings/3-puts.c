#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts - function to print a string
 * @str: The string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
