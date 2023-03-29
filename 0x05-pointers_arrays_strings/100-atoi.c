#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if there are no numbers
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int found_num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+' || (*s >= '0' && *s <= '9'))
		{
			found_num = 1;
			if (*s != '+')
			{
				num *= 10;
				num += (*s - '0');
			}
		}
		else if (found_num)
		{
			break;
		}
		s++;
	}

	return (num * sign);
}
