#include "main.h"

void print_diagonal(int n)
{
        int i;
	int j;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
        for (i = 1; i <= n; i++)
        {
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
        	_putchar('\n');
        }
        _putchar('\n');
}
