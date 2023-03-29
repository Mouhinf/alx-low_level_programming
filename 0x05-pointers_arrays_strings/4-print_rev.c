#include "main.h"

void print_rev(char *s)
{
	int n = 0;
	int i;

	while (*s != 0)
	{
		n += 1;
		s++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
