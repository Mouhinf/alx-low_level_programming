#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = tmp;
	}
}
