#include <unistd.h>
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
