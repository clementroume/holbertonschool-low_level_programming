#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _strlen - function return the length of a string
 * @s: The string
 * Return: String length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * print_rev - function to print a reversed string
 * @s: The string
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	while (--len >= 0)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
