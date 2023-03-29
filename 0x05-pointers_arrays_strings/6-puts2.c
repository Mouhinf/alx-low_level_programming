#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 */
void puts2(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
