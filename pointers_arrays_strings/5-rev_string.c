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
 * rev_string - function to revert a string
 * @s: The string
 */
void rev_string(char *s)
{
	int first = -1;
	int last = _strlen(s);
	char temp;

	while (++first < --last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
	}
}
