#include <stdio.h>
#include <unistd.h>

/**
 * main - function that convert a string to an integer
 *@s: String to be converted to int
 *
 * Return: converted int
 */
int _atoi(char *s)
{
	int sign = 1;
	int n = 0;
	int i = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (10 * n + s[i] - '0');
			flag = 1;
		}
		else if (flag == 1)
			break;
		i++;
	}
	return (sign * n);
}
