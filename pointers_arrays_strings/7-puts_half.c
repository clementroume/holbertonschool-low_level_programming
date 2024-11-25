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
 * puts_half - function that prints half of a string
 * @str: The string
 */

void puts_half(char *str)
{
	int len = _strlen(str) - 1;
	int i;

	if (len % 2 == 0)
	{
		i = len / 2 + 1;
	}
	else
	{
		i = (len - 1) / 2 + 1;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
