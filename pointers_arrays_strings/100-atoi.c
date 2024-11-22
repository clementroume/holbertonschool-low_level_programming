#include <stdio.h>
#include <unistd.h>

int _atoi(char *s)
{
	int sign = 1;
	int n = 0;

	while ((*s > 0 && *s <= 47) || (*s >= 58 && *s < 127))
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else
			s++;
	}
	while (*s >= '0' && *s <= '9')
		n = (10 * n + *s++ - '0');
	return (sign * n);
}
