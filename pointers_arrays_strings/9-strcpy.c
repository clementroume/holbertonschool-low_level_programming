#include <stdio.h>
#include <unistd.h>

/**
 * _strcpy - function that copies a string in another
 * @src: Source string
 * @dest: Destination string
 *
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
