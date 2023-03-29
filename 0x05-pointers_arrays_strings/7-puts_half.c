#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i;

	if (n % 2 == 0)
	{
		for (i = n /2; i < n; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = (n + 1) / 2 ; i < n; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
